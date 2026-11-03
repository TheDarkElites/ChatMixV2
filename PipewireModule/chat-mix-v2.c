#include <stdio.h>
#include <stdlib.h>

#include <spa/utils/result.h>
#include <spa/utils/string.h>
#include <spa/utils/json.h>
#include <spa/utils/ringbuffer.h>
#include <spa/debug/types.h>
#include <spa/pod/builder.h>
#include <spa/param/audio/format-utils.h>
#include <spa/param/audio/raw.h>
#include <spa/param/audio/raw-json.h>

#include <pipewire/impl.h>
#include <pipewire/i18n.h>

SPA_EXPORT
int pipewire__module_init(struct pw_impl_module *module, const char *args) {
   (void)module, (void)args;
   return 0;
}