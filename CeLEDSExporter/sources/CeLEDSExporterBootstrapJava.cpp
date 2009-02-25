#include <exception>
#include <jni.h>
#include "j2pCeLEDS.hxx"
#include "CeLEDSBootstrap.hpp"
#include "Utilities.hxx"

extern "C" { JWRAP_PUBLIC_PRE jobject Java_cellml_1bootstrap_CeLEDSExporterBootstrap_createCeLEDSExporterBootstrap(JNIEnv* env, jclass clazz) JWRAP_PUBLIC_POST; }

jobject
Java_cellml_1bootstrap_CeLEDSExporterBootstrap_createCeLEDSExporterBootstrap(JNIEnv* env, jclass clazz)
{
  RETURN_INTO_OBJREF(mb, iface::cellml_services::CeLEDSExporterBootstrap, CreateCeLEDSExporterBootstrap());
  return wrap_cellml_services_CeLEDSExporterBootstrap(env, mb);
}

