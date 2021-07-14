#include <Imath/ImathBox.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

// I don't think we actually need the matching namespace structure any more
// since we're using the type aliases on the classes as "type pointers"
namespace IMATH_INTERNAL_NAMESPACE {

namespace Imath = ::IMATH_INTERNAL_NAMESPACE;

template <class V> class Box {
public:
    // This allows us to see through to the type in Imath
    using BoundType = Imath::Box<V>;

    Box() CPPMM_RENAME(default);
    Box(const V& point) CPPMM_RENAME(from_point);
    Box(const V& minV, const V& maxV);

    Box(const ::Imath::Box<V>& rhs);
    Box(::Imath::Box<V>&& rhs) CPPMM_IGNORE;

    ::Imath::Box<V>& operator=(const ::Imath::Box<V>& rhs) CPPMM_IGNORE;

    ~Box();

    bool operator==(const Imath::Box<V>& src) const;
    bool operator!=(const Imath::Box<V>& src) const;

    void makeEmpty();
    void extendBy(const V& point) CPPMM_RENAME(extendBy_point);
    void extendBy(const Imath::Box<V>& box) CPPMM_RENAME(extendBy_box);
    void makeInfinite();

    V size() const;
    V center() const;
    bool intersects(const V& point) const CPPMM_RENAME(intersects_point);
    bool intersects(const Imath::Box<V>& box) const
        CPPMM_RENAME(intersects_box);

    unsigned int majorAxis() const;

    bool isEmpty() const;
    bool hasVolume() const;
    bool isInfinite() const;
} CPPMM_VALUETYPE CPPMM_TRIVIALLY_COPYABLE CPPMM_TRIVIALLY_MOVABLE;

template class Box<Imath::Vec2<short>>;
template class Box<Imath::Vec2<int>>;
template class Box<Imath::Vec2<float>>;
template class Box<Imath::Vec2<double>>;

using Box2s = Imath::Box2s;
using Box2i = Imath::Box2i;
using Box2f = Imath::Box2f;
using Box2d = Imath::Box2d;

template class Box<Imath::Vec3<short>>;
template class Box<Imath::Vec3<int>>;
template class Box<Imath::Vec3<float>>;
template class Box<Imath::Vec3<double>>;

using Box3s = Imath::Box3s;
using Box3i = Imath::Box3i;
using Box3f = Imath::Box3f;
using Box3d = Imath::Box3d;

} // namespace IMATH_INTERNAL_NAMESPACE
} // namespace cppmm_bind

template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec2<short>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec2<int>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec2<float>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec2<double>>;

template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec3<short>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec3<int>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec3<float>>;
template class IMATH_INTERNAL_NAMESPACE::Box<
    IMATH_INTERNAL_NAMESPACE::Vec3<double>>;
