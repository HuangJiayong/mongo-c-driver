/*
 * Copyright 2016 MongoDB, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MONGOC_SECURE_CHANNEL_PRIVATE_H
#define MONGOC_SECURE_CHANNEL_PRIVATE_H

#if !defined (MONGOC_I_AM_A_DRIVER) && !defined (MONGOC_COMPILATION)
#error "Only <mongoc.h> can be included directly."
#endif

#include <bson.h>

#include "mongoc-ssl.h"
#include "mongoc-stream-tls-secure-channel-private.h"


BSON_BEGIN_DECLS


char *
_mongoc_secure_channel_extract_subject  (const char                         *filename,
                                         const char                         *passphrase);

bool
mongoc_secure_channel_setup_ca          (mongoc_stream_tls_secure_channel_t *secure_channel,
                                         mongoc_ssl_opt_t                   *opt);
bool
mongoc_secure_channel_setup_certificate (mongoc_stream_tls_secure_channel_t *secure_channel,
                                         mongoc_ssl_opt_t                   *opt);

BSON_END_DECLS


#endif /* MONGOC_SECURE_CHANNEL_PRIVATE_H */
