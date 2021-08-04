#pragma once
#include <c-filesystem.h>


#include "oiio-errors-private.h"

#include <OpenImageIO/filesystem.h>
#include <cstring>

inline OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode const & OIIO_Filesystem_IOProxy_Mode_to_cpp_ref(
    OIIO_Filesystem_IOProxy_Mode const * rhs)
{
        return *(reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode const * >(rhs));
}

inline OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode & OIIO_Filesystem_IOProxy_Mode_to_cpp_ref(
    OIIO_Filesystem_IOProxy_Mode * rhs)
{
        return *(reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode * >(rhs));
}

inline OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode const * OIIO_Filesystem_IOProxy_Mode_to_cpp(
    OIIO_Filesystem_IOProxy_Mode const * rhs)
{
        return reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode const * >(rhs);
}

inline OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode * OIIO_Filesystem_IOProxy_Mode_to_cpp(
    OIIO_Filesystem_IOProxy_Mode * rhs)
{
        return reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode * >(rhs);
}

inline void to_c(
    OIIO_Filesystem_IOProxy_Mode const * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode const & rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOProxy_Mode const * >(&(rhs));
}

inline void to_c(
    OIIO_Filesystem_IOProxy_Mode const * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode const * rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOProxy_Mode const * >(rhs);
}

inline void to_c(
    OIIO_Filesystem_IOProxy_Mode * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode & rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOProxy_Mode * >(&(rhs));
}

inline void to_c(
    OIIO_Filesystem_IOProxy_Mode * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode * rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOProxy_Mode * >(rhs);
}

inline void to_c_copy(
    OIIO_Filesystem_IOProxy_Mode * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOProxy::Mode const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline OpenImageIO_v2_3_6::Filesystem::IOProxy const & to_cpp_ref(
    OIIO_Filesystem_IOProxy_t const * rhs)
{
        return *(reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOProxy const * >(rhs));
}

inline OpenImageIO_v2_3_6::Filesystem::IOProxy & to_cpp_ref(
    OIIO_Filesystem_IOProxy_t * rhs)
{
        return *(reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOProxy * >(rhs));
}

inline OpenImageIO_v2_3_6::Filesystem::IOProxy const * to_cpp(
    OIIO_Filesystem_IOProxy_t const * rhs)
{
        return reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOProxy const * >(rhs);
}

inline OpenImageIO_v2_3_6::Filesystem::IOProxy * to_cpp(
    OIIO_Filesystem_IOProxy_t * rhs)
{
        return reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOProxy * >(rhs);
}

inline void to_c(
    OIIO_Filesystem_IOProxy_t const * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOProxy const & rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOProxy_t const * >(&(rhs));
}

inline void to_c(
    OIIO_Filesystem_IOProxy_t const * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOProxy const * rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOProxy_t const * >(rhs);
}

inline void to_c(
    OIIO_Filesystem_IOProxy_t * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOProxy & rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOProxy_t * >(&(rhs));
}

inline void to_c(
    OIIO_Filesystem_IOProxy_t * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOProxy * rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOProxy_t * >(rhs);
}

inline OpenImageIO_v2_3_6::Filesystem::IOFile const & to_cpp_ref(
    OIIO_Filesystem_IOFile_t const * rhs)
{
        return *(reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOFile const * >(rhs));
}

inline OpenImageIO_v2_3_6::Filesystem::IOFile & to_cpp_ref(
    OIIO_Filesystem_IOFile_t * rhs)
{
        return *(reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOFile * >(rhs));
}

inline OpenImageIO_v2_3_6::Filesystem::IOFile const * to_cpp(
    OIIO_Filesystem_IOFile_t const * rhs)
{
        return reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOFile const * >(rhs);
}

inline OpenImageIO_v2_3_6::Filesystem::IOFile * to_cpp(
    OIIO_Filesystem_IOFile_t * rhs)
{
        return reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOFile * >(rhs);
}

inline void to_c(
    OIIO_Filesystem_IOFile_t const * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOFile const & rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOFile_t const * >(&(rhs));
}

inline void to_c(
    OIIO_Filesystem_IOFile_t const * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOFile const * rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOFile_t const * >(rhs);
}

inline void to_c(
    OIIO_Filesystem_IOFile_t * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOFile & rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOFile_t * >(&(rhs));
}

inline void to_c(
    OIIO_Filesystem_IOFile_t * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOFile * rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOFile_t * >(rhs);
}

inline OpenImageIO_v2_3_6::Filesystem::IOVecOutput const & to_cpp_ref(
    OIIO_Filesystem_IOVecOutput_t const * rhs)
{
        return *(reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOVecOutput const * >(rhs));
}

inline OpenImageIO_v2_3_6::Filesystem::IOVecOutput & to_cpp_ref(
    OIIO_Filesystem_IOVecOutput_t * rhs)
{
        return *(reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOVecOutput * >(rhs));
}

inline OpenImageIO_v2_3_6::Filesystem::IOVecOutput const * to_cpp(
    OIIO_Filesystem_IOVecOutput_t const * rhs)
{
        return reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOVecOutput const * >(rhs);
}

inline OpenImageIO_v2_3_6::Filesystem::IOVecOutput * to_cpp(
    OIIO_Filesystem_IOVecOutput_t * rhs)
{
        return reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOVecOutput * >(rhs);
}

inline void to_c(
    OIIO_Filesystem_IOVecOutput_t const * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOVecOutput const & rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOVecOutput_t const * >(&(rhs));
}

inline void to_c(
    OIIO_Filesystem_IOVecOutput_t const * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOVecOutput const * rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOVecOutput_t const * >(rhs);
}

inline void to_c(
    OIIO_Filesystem_IOVecOutput_t * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOVecOutput & rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOVecOutput_t * >(&(rhs));
}

inline void to_c(
    OIIO_Filesystem_IOVecOutput_t * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOVecOutput * rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOVecOutput_t * >(rhs);
}

inline OpenImageIO_v2_3_6::Filesystem::IOMemReader const & to_cpp_ref(
    OIIO_Filesystem_IOMemReader_t const * rhs)
{
        return *(reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOMemReader const * >(rhs));
}

inline OpenImageIO_v2_3_6::Filesystem::IOMemReader & to_cpp_ref(
    OIIO_Filesystem_IOMemReader_t * rhs)
{
        return *(reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOMemReader * >(rhs));
}

inline OpenImageIO_v2_3_6::Filesystem::IOMemReader const * to_cpp(
    OIIO_Filesystem_IOMemReader_t const * rhs)
{
        return reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOMemReader const * >(rhs);
}

inline OpenImageIO_v2_3_6::Filesystem::IOMemReader * to_cpp(
    OIIO_Filesystem_IOMemReader_t * rhs)
{
        return reinterpret_cast<OpenImageIO_v2_3_6::Filesystem::IOMemReader * >(rhs);
}

inline void to_c(
    OIIO_Filesystem_IOMemReader_t const * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOMemReader const & rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOMemReader_t const * >(&(rhs));
}

inline void to_c(
    OIIO_Filesystem_IOMemReader_t const * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOMemReader const * rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOMemReader_t const * >(rhs);
}

inline void to_c(
    OIIO_Filesystem_IOMemReader_t * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOMemReader & rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOMemReader_t * >(&(rhs));
}

inline void to_c(
    OIIO_Filesystem_IOMemReader_t * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOMemReader * rhs)
{
        *(lhs) = reinterpret_cast<OIIO_Filesystem_IOMemReader_t * >(rhs);
}

inline void to_c_copy(
    OIIO_Filesystem_IOMemReader_t * * lhs
    , OpenImageIO_v2_3_6::Filesystem::IOMemReader const & rhs)
{
        OpenImageIO_v2_3_6__Filesystem__IOMemReader_copy(lhs, reinterpret_cast<OIIO_Filesystem_IOMemReader_t const * >(&(rhs)));
}

