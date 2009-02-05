
#ifndef PHP_MONGO_H
#define PHP_MONGO_H 1

#define PHP_MONGO_VERSION "1.0"
#define PHP_MONGO_EXTNAME "mongo"

#define PHP_DB_CLIENT_CONNECTION_RES_NAME "mongo connection"

PHP_MINIT_FUNCTION(mongo);

/** mongo::DBClientConnection mongo_connect() // connects to localhost
 *  mongo::DBClientConnection mongo_connect( "host" )
 */
PHP_FUNCTION(mongo_connect);
/** bool mongo_close( mongo::DBClientConnection )
 */
PHP_FUNCTION(mongo_close);
/** mongo::DBClientConnection mongo_query( mongo::DBClientConnection, char* collection, zval *query, int limit, int skip, zval *fields, int opts )
 */
PHP_FUNCTION(mongo_query);
PHP_FUNCTION(mongo_remove);
PHP_FUNCTION(mongo_insert);
PHP_FUNCTION(mongo_update);

extern zend_module_entry mongo_module_entry;
#define phpext_mongo_ptr &mongo_module_entry

#endif
