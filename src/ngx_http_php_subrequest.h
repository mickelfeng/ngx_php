/**
 *    Copyright(c) 2016 rryqszq4
 *
 *
 */

#ifndef NGX_HTTP_PHP_SUBREQUEST_H
#define NGX_HTTP_PHP_SUBREQUEST_H

#include "ngx_http_php_module.h"

#include <pthread.h>

pthread_t id_1;

ngx_int_t ngx_http_php_subrequest_post(ngx_http_request_t *r);
ngx_int_t ngx_http_php_subrequest_post_handler(ngx_http_request_t *r, void *data, ngx_int_t rc);
void ngx_http_php_subrequest_post_parent(ngx_http_request_t *r);

#endif