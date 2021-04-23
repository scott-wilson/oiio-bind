#include <OpenEXR/ImathVec.h>

#include <vector>

// CPPMM_ macro definitions etc automatically inserted in this virtual header
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace IMATH_INTERNAL_NAMESPACE {

namespace Imath = ::IMATH_INTERNAL_NAMESPACE;

/// Enum for the Vec4 to Vec3 conversion constructor
enum InfException {};

template <class T> class Vec2 {
public:
    // This allows us to see through to the type in Imath
    using BoundType = Imath::Vec2<T>;

    T& operator[](int i) CPPMM_RENAME(index);
    const T& operator[](int i) const CPPMM_RENAME(index_const);

    Vec2() CPPMM_IGNORE;                        // no initialization
    explicit Vec2(T a) CPPMM_RENAME(broadcast); // (a a)
    Vec2(T a, T b);                             // (a b)

    Vec2(const Imath::Vec2<T>& v);
    const Imath::Vec2<T>& operator=(const Imath::Vec2<T>& v);

    template <class S> Vec2(const Imath::Vec2<S>& v) CPPMM_IGNORE;

    //------------
    // Destructor
    //------------

    ~Vec2() = default;

    //----------------------
    // Compatibility with Sb
    //----------------------

    template <class S> void setValue(S a, S b) CPPMM_IGNORE;

    template <class S> void setValue(const Vec2<S>& v) CPPMM_IGNORE;

    template <class S> void getValue(S& a, S& b) const CPPMM_IGNORE;

    template <class S> void getValue(Vec2<S>& v) const CPPMM_IGNORE;

    T* getValue() CPPMM_IGNORE;
    const T* getValue() const CPPMM_IGNORE;

    //---------
    // Equality
    //---------

    template <class S> bool operator==(const Imath::Vec2<S>& v) const;

    template <class S> bool operator!=(const Imath::Vec2<S>& v) const;

    //-----------------------------------------------------------------------
    // Compare two vectors and test if they are "approximately equal":
    //
    // equalWithAbsError (v, e)
    //
    //	    Returns true if the coefficients of this and v are the same with
    //	    an absolute error of no more than e, i.e., for all i
    //
    //      abs (this[i] - v[i]) <= e
    //
    // equalWithRelError (v, e)
    //
    //	    Returns true if the coefficients of this and v are the same with
    //	    a relative error of no more than e, i.e., for all i
    //
    //      abs (this[i] - v[i]) <= e * abs (this[i])
    //-----------------------------------------------------------------------

    bool equalWithAbsError(const Imath::Vec2<T>& v, T e) const;
    bool equalWithRelError(const Imath::Vec2<T>& v, T e) const;

    //------------
    // Dot product
    //------------

    T dot(const Imath::Vec2<T>& v) const;
    T operator^(const Imath::Vec2<T>& v) const CPPMM_IGNORE;

    //------------------------------------------------
    // Right-handed cross product, i.e. z component of
    // Vec3 (this->x, this->y, 0) % Vec3 (v.x, v.y, 0)
    //------------------------------------------------

    T cross(const Imath::Vec2<T>& v) const;
    T operator%(const Imath::Vec2<T>& v) const CPPMM_IGNORE;

    //------------------------
    // Component-wise addition
    //------------------------

    const Imath::Vec2<T>& operator+=(const Imath::Vec2<T>& v);
    Imath::Vec2<T> operator+(const Imath::Vec2<T>& v) const;

    //---------------------------
    // Component-wise subtraction
    //---------------------------

    const Imath::Vec2<T>& operator-=(const Imath::Vec2<T>& v);
    Imath::Vec2<T> operator-(const Imath::Vec2<T>& v) const;

    //------------------------------------
    // Component-wise multiplication by -1
    //------------------------------------

    Imath::Vec2<T> operator-() const;
    const Imath::Vec2<T>& negate();

    //------------------------------
    // Component-wise multiplication
    //------------------------------

    const Imath::Vec2<T>& operator*=(const Imath::Vec2<T>& v);
    const Imath::Vec2<T>& operator*=(T a);
    Imath::Vec2<T> operator*(const Imath::Vec2<T>& v) const;
    Imath::Vec2<T> operator*(T a) const;

    //------------------------
    // Component-wise division
    //------------------------

    const Imath::Vec2<T>& operator/=(const Imath::Vec2<T>& v);
    const Imath::Vec2<T>& operator/=(T a);
    Imath::Vec2<T> operator/(const Imath::Vec2<T>& v) const;
    Imath::Vec2<T> operator/(T a) const;

    //----------------------------------------------------------------
    // Length and normalization:  If v.length() is 0.0, v.normalize()
    // and v.normalized() produce a null vector; v.normalizeExc() and
    // v.normalizedExc() throw a NullVecExc.
    // v.normalizeNonNull() and v.normalizedNonNull() are slightly
    // faster than the other normalization routines, but if v.length()
    // is 0.0, the result is undefined.
    //----------------------------------------------------------------

    T length() const;
    T length2() const;

    const Imath::Vec2<T>& normalize(); // modifies *this
    const Imath::Vec2<T>& normalizeExc();
    const Imath::Vec2<T>& normalizeNonNull();

    Imath::Vec2<T> normalized() const; // does not modify *this
    Imath::Vec2<T> normalizedExc() const;
    Imath::Vec2<T> normalizedNonNull() const;

    //--------------------------------------------------------
    // Number of dimensions, i.e. number of elements in a Vec2
    //--------------------------------------------------------

    static unsigned int dimensions();

    //-------------------------------------------------
    // Limitations of type T (see also class limits<T>)
    //-------------------------------------------------

    static T baseTypeMin();
    static T baseTypeMax();
    static T baseTypeSmallest();
    static T baseTypeEpsilon();

} CPPMM_VALUETYPE;

// explicit instantiation
template class Vec2<short>;
template class Vec2<int>;
template class Vec2<float>;
template class Vec2<double>;
using V2s = Imath::V2s;
using V2i = Imath::V2i;
using V2f = Imath::V2f;
using V2d = Imath::V2d;

template <class T> class Vec3 {
public:
    // This allows us to see through to the type in Imath
    using BoundType = Imath::Vec3<T>;

    Vec3() noexcept;
    Vec3(const ::Imath::Vec3<T>& v);
    const Imath::Vec3<T>& operator=(const Imath::Vec3<T>& v);

    T& operator[](int i) noexcept CPPMM_RENAME(index);

    /// Element access by index.
    const T& operator[](int i) const noexcept CPPMM_RENAME(index_const);

    /// @{
    ///	@name Constructors and Assignment

    /// Initialize to a scalar `(a,a,a)`
    constexpr explicit Vec3(T a) noexcept;

    /// Initialize to given elements `(a,b,c)`
    constexpr Vec3(T a, T b, T c) noexcept;

    /// Construct from Vec3 of another base type
    template <class S> constexpr Vec3(const Imath::Vec3<S>& v) noexcept;

    /// Vec4 to Vec3 conversion: divide x, y and z by w, even if w is
    /// 0.  The result depends on how the environment handles
    /// floating-point exceptions.
    template <class S>
    explicit constexpr Vec3(const Imath::Vec4<S>& v) noexcept;

    /// Vec4 to Vec3 conversion: divide x, y and z by w.  Throws an
    /// exception if w is zero or if division by w would overflow.
    template <class S>
    explicit Vec3(const Imath::Vec4<S>& v, Imath::InfException);

    /// Destructor
    ~Vec3() noexcept = default;

    /// @}

    /// @{
    /// @name Compatibility with Sb

    /// Set the value
    template <class S> void setValue(S a, S b, S c) noexcept;

    /// Set the value
    template <class S> void setValue(const Imath::Vec3<S>& v) noexcept;

    /// Return the value in `a`, `b`, and `c`
    template <class S> void getValue(S& a, S& b, S& c) const noexcept;

    /// Return the value in `v`
    template <class S> void getValue(Imath::Vec3<S>& v) const noexcept;

    /// Return a raw pointer to the array of values
    T* getValue() noexcept;

    /// Return a raw pointer to the array of values
    const T* getValue() const noexcept;

    /// @}

    /// @{
    /// @name Arithmetic and Comparison

    /// Equality
    template <class S>
    constexpr bool operator==(const Imath::Vec3<S>& v) const noexcept;

    /// Inequality
    template <class S>
    constexpr bool operator!=(const Imath::Vec3<S>& v) const noexcept;

    /// Compare two matrices and test if they are "approximately equal":
    /// @return True if the coefficients of this and `m` are the same
    /// with an absolute error of no more than e, i.e., for all i, j:
    ///
    ///   abs (this[i][j] - m[i][j]) <= e
    bool equalWithAbsError(const Imath::Vec3<T>& v, T e) const noexcept;

    /// Compare two matrices and test if they are "approximately equal":
    /// @return True if the coefficients of this and m are the same with
    /// a relative error of no more than e, i.e., for all i, j:
    ///
    ///   abs (this[i] - v[i][j]) <= e * abs (this[i][j])
    bool equalWithRelError(const Imath::Vec3<T>& v, T e) const noexcept;

    /// Dot product
    constexpr T dot(const Imath::Vec3<T>& v) const noexcept;

    /// Dot product
    constexpr T operator^(const Imath::Vec3<T>& v) const noexcept CPPMM_IGNORE;

    /// Right-handed cross product
    constexpr Imath::Vec3<T> cross(const Imath::Vec3<T>& v) const noexcept;

    /// Right-handed cross product
    const Imath::Vec3<T>&
    operator%=(const Imath::Vec3<T>& v) noexcept CPPMM_IGNORE;

    /// Right-handed cross product
    constexpr Imath::Vec3<T>
    operator%(const Imath::Vec3<T>& v) const noexcept CPPMM_IGNORE;

    /// Component-wise addition
    const Imath::Vec3<T>& operator+=(const Imath::Vec3<T>& v) noexcept;

    /// Component-wise addition
    constexpr Imath::Vec3<T> operator+(const Imath::Vec3<T>& v) const noexcept;

    /// Component-wise subtraction
    const Imath::Vec3<T>& operator-=(const Imath::Vec3<T>& v) noexcept;

    /// Component-wise subtraction
    constexpr Imath::Vec3<T> operator-(const Imath::Vec3<T>& v) const noexcept;

    /// Component-wise multiplication by -1
    constexpr Imath::Vec3<T> operator-() const noexcept;

    /// Component-wise multiplication by -1
    const Imath::Vec3<T>& negate() noexcept;

    /// Component-wise multiplication
    const Imath::Vec3<T>& operator*=(const Imath::Vec3<T>& v) noexcept;

    /// Component-wise multiplication
    const Imath::Vec3<T>& operator*=(T a) noexcept;

    /// Component-wise multiplication
    constexpr Imath::Vec3<T> operator*(const Imath::Vec3<T>& v) const noexcept;

    /// Component-wise multiplication
    constexpr Imath::Vec3<T> operator*(T a) const noexcept;

    /// Component-wise division
    const Imath::Vec3<T>& operator/=(const Imath::Vec3<T>& v) noexcept;

    /// Component-wise division
    const Imath::Vec3<T>& operator/=(T a) noexcept;

    /// Component-wise division
    constexpr Imath::Vec3<T> operator/(const Imath::Vec3<T>& v) const noexcept;

    /// Component-wise division
    constexpr Imath::Vec3<T> operator/(T a) const noexcept;

    /// @}

    /// @{
    /// @name Query and Manipulation

    /// Return the Euclidean norm
    T length() const noexcept;

    /// Return the square of the Euclidean norm, i.e. the dot product
    /// with itself.
    constexpr T length2() const noexcept;

    /// Normalize in place. If length()==0, return a null vector.
    const Imath::Vec3<T>& normalize() noexcept;

    /// Normalize in place. If length()==0, throw an exception.
    const Imath::Vec3<T>& normalizeExc() CPPMM_IGNORE;

    /// Normalize without any checks for length()==0. Slightly faster
    /// than the other normalization routines, but if v.length() is
    /// 0.0, the result is undefined.
    const Imath::Vec3<T>& normalizeNonNull() noexcept;

    /// Return a normalized vector. Does not modify *this.
    Imath::Vec3<T> normalized() const noexcept; // does not modify *this

    /// Return a normalized vector. Does not modify *this. Throw an
    /// exception if length()==0.
    Imath::Vec3<T> normalizedExc() const CPPMM_IGNORE;

    /// Return a normalized vector. Does not modify *this, and does
    /// not check for length()==0. Slightly faster than the other
    /// normalization routines, but if v.length() is 0.0, the result
    /// is undefined.
    Imath::Vec3<T> normalizedNonNull() const noexcept;

    /// @}

    /// @{
    /// @name Numeric Limits

    /// Largest possible negative value
    constexpr static T baseTypeMin() noexcept;

    /// Largest possible positive value
    constexpr static T baseTypeMax() noexcept;
    /// Smallest possible positive value
    constexpr static T baseTypeSmallest() noexcept;

    /// Smallest possible e for which 1+e != 1
    constexpr static T baseTypeEpsilon() noexcept;

    /// @}

    /// Return the number of dimensions, i.e. 3
    constexpr static unsigned int dimensions() noexcept;

} CPPMM_VALUETYPE;

// explicit instantiation
template class Vec3<short>;
template class Vec3<int>;
template class Vec3<float>;
template class Vec3<double>;
using V3s = Imath::V3s;
using V3i = Imath::V3i;
using V3f = Imath::V3f;
using V3d = Imath::V3d;

template <class T> class Vec4 {
public:
    // This allows us to see through to the type in Imath
    using BoundType = Imath::Vec4<T>;

    Vec4(const ::Imath::Vec4<T>& v);
    const Imath::Vec4<T>& operator=(const ::Imath::Vec4<T>& v);

    /// Element access by index.
    T& operator[](int i) noexcept CPPMM_RENAME(index);

    /// Element access by index.
    constexpr const T& operator[](int i) const noexcept
        CPPMM_RENAME(index_const);

    /// @{
    ///	@name Constructors and Assignment

    /// Uninitialized by default
    Vec4() noexcept; // no initialization

    /// Initialize to a scalar `(a,a,a,a)`
    constexpr explicit Vec4(T a) noexcept;

    /// Initialize to given elements `(a,b,c,d)`
    constexpr Vec4(T a, T b, T c, T d) noexcept;

    /// Construct from Vec4 of another base type
    template <class S> constexpr Vec4(const Imath::Vec4<S>& v) noexcept;

    /// Vec3 to Vec4 conversion, sets w to 1.
    template <class S>
    explicit constexpr Vec4(const Imath::Vec3<S>& v) noexcept;

    /// Destructor
    ~Vec4() noexcept = default;

    /// @}

    /// @{
    /// @name Arithmetic and Comparison

    /// Equality
    template <class S>
    constexpr bool operator==(const Imath::Vec4<S>& v) const noexcept;

    /// Inequality
    template <class S>
    constexpr bool operator!=(const Imath::Vec4<S>& v) const noexcept;

    /// Compare two matrices and test if they are "approximately equal":
    /// @return True if the coefficients of this and `m` are the same
    /// with an absolute error of no more than e, i.e., for all i, j:
    ///
    ///   abs (this[i][j] - m[i][j]) <= e
    bool equalWithAbsError(const Imath::Vec4<T>& v, T e) const noexcept;

    /// Compare two matrices and test if they are "approximately equal":
    /// @return True if the coefficients of this and m are the same with
    /// a relative error of no more than e, i.e., for all i, j:
    ///
    ///   abs (this[i] - v[i][j]) <= e * abs (this[i][j])
    bool equalWithRelError(const Imath::Vec4<T>& v, T e) const noexcept;

    /// Dot product
    constexpr T dot(const Imath::Vec4<T>& v) const noexcept;

    /// Dot product
    constexpr T operator^(const Imath::Vec4<T>& v) const noexcept CPPMM_IGNORE;

    /// Component-wise addition
    const Imath::Vec4<T>&
    operator+=(const Imath::Vec4<T>& v) noexcept CPPMM_IGNORE;

    /// Component-wise addition
    constexpr Imath::Vec4<T> operator+(const Imath::Vec4<T>& v) const noexcept;

    /// Component-wise subtraction
    const Imath::Vec4<T>& operator-=(const Imath::Vec4<T>& v) noexcept;

    /// Component-wise subtraction
    constexpr Imath::Vec4<T> operator-(const Imath::Vec4<T>& v) const noexcept;

    /// Component-wise multiplication by -1
    constexpr Imath::Vec4<T> operator-() const noexcept;

    /// Component-wise multiplication by -1
    const Imath::Vec4<T>& negate() noexcept;

    /// Component-wise multiplication
    const Imath::Vec4<T>& operator*=(const Imath::Vec4<T>& v) noexcept;

    /// Component-wise multiplication
    const Imath::Vec4<T>& operator*=(T a) noexcept;

    /// Component-wise multiplication
    constexpr Imath::Vec4<T> operator*(const Imath::Vec4<T>& v) const noexcept;

    /// Component-wise multiplication
    constexpr Imath::Vec4<T> operator*(T a) const noexcept;

    /// Component-wise division
    const Imath::Vec4<T>& operator/=(const Imath::Vec4<T>& v) noexcept;

    /// Component-wise division
    const Imath::Vec4<T>& operator/=(T a) noexcept;

    /// Component-wise division
    constexpr Imath::Vec4<T> operator/(const Imath::Vec4<T>& v) const noexcept;

    /// Component-wise division
    constexpr Imath::Vec4<T> operator/(T a) const noexcept;

    /// @}

    /// @{
    /// @name Query and Manipulation

    /// Return the Euclidean norm
    T length() const noexcept;

    /// Return the square of the Euclidean norm, i.e. the dot product
    /// with itself.
    constexpr T length2() const noexcept;

    /// Normalize in place. If length()==0, return a null vector.
    const Imath::Vec4<T>& normalize() noexcept; // modifies *this

    /// Normalize in place. If length()==0, throw an exception.
    const Imath::Vec4<T>& normalizeExc() CPPMM_IGNORE;

    /// Normalize without any checks for length()==0. Slightly faster
    /// than the other normalization routines, but if v.length() is
    /// 0.0, the result is undefined.
    const Imath::Vec4<T>& normalizeNonNull() noexcept;

    /// Return a normalized vector. Does not modify *this.
    Imath::Vec4<T> normalized() const noexcept; // does not modify *this

    /// Return a normalized vector. Does not modify *this. Throw an
    /// exception if length()==0.
    Imath::Vec4<T> normalizedExc() const CPPMM_IGNORE;

    /// Return a normalized vector. Does not modify *this, and does
    /// not check for length()==0. Slightly faster than the other
    /// normalization routines, but if v.length() is 0.0, the result
    /// is undefined.
    Imath::Vec4<T> normalizedNonNull() const noexcept;

    /// @}

    /// @{
    /// @name Numeric Limits

    /// Largest possible negative value
    constexpr static T baseTypeMin() noexcept;

    /// Largest possible positive value
    constexpr static T baseTypeMax() noexcept;

    /// Smallest possible positive value
    constexpr static T baseTypeSmallest() noexcept;

    /// Smallest possible e for which 1+e != 1
    constexpr static T baseTypeEpsilon() noexcept;
    /// @}

    /// Return the number of dimensions, i.e. 4
    constexpr static unsigned int dimensions() noexcept;

} CPPMM_VALUETYPE;

// explicit instantiation
template class Vec4<short>;
template class Vec4<int>;
template class Vec4<float>;
template class Vec4<double>;
using V4s = Imath::V4s;
using V4i = Imath::V4i;
using V4f = Imath::V4f;
using V4d = Imath::V4d;

} // namespace IMATH_INTERNAL_NAMESPACE
} // namespace cppmm_bind

template class Imath::Vec2<short>;
template class Imath::Vec2<int>;
template class Imath::Vec2<float>;
template class Imath::Vec2<double>;

template class Imath::Vec3<short>;
template class Imath::Vec3<int>;
template class Imath::Vec3<float>;
template class Imath::Vec3<double>;

template class Imath::Vec4<short>;
template class Imath::Vec4<int>;
template class Imath::Vec4<float>;
template class Imath::Vec4<double>;
