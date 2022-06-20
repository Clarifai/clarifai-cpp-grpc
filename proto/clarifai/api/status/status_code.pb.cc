// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/clarifai/api/status/status_code.proto

#include "proto/clarifai/api/status/status_code.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace clarifai {
namespace api {
namespace status {
}  // namespace status
}  // namespace api
}  // namespace clarifai
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto = nullptr;
const uint32_t TableStruct_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n+proto/clarifai/api/status/status_code."
  "proto\022\023clarifai.api.status*\356J\n\nStatusCod"
  "e\022\010\n\004ZERO\020\000\022\014\n\007SUCCESS\020\220N\022\021\n\014MIXED_STATU"
  "S\020\232N\022\014\n\007FAILURE\020\244N\022\016\n\tTRY_AGAIN\020\256N\022\024\n\017NO"
  "T_IMPLEMENTED\020\270N\022\n\n\005MOVED\020\302N\022\030\n\023CONN_ACC"
  "OUNT_ISSUES\020\370U\022\033\n\022CONN_TOKEN_INVALID\020\371U\032"
  "\002\010\001\022\035\n\030CONN_CREDENTIALS_INVALID\020\372U\022\035\n\030CO"
  "NN_EXCEED_HOURLY_LIMIT\020\373U\022\036\n\031CONN_EXCEED"
  "_MONTHLY_LIMIT\020\374U\022\023\n\016CONN_THROTTLED\020\375U\022\030"
  "\n\023CONN_EXCEEDS_LIMITS\020\376U\022\035\n\030CONN_INSUFFI"
  "CIENT_SCOPES\020\377U\022\025\n\020CONN_KEY_INVALID\020\200V\022\027"
  "\n\022CONN_KEY_NOT_FOUND\020\201V\022\034\n\027CONN_BAD_REQU"
  "EST_FORMAT\020\334V\022\030\n\023CONN_DOES_NOT_EXIST\020\335V\022"
  "\031\n\024CONN_INVALID_REQUEST\020\336V\022\034\n\027CONN_METHO"
  "D_NOT_ALLOWED\020\337V\022\031\n\024CONN_NO_GDPR_CONSENT"
  "\020\340V\022\036\n\031CONN_AUTH_METHOD_DISABLED\020\300W\022\023\n\rM"
  "ODEL_TRAINED\020\354\244\001\022\024\n\016MODEL_TRAINING\020\355\244\001\022\025"
  "\n\017MODEL_UNTRAINED\020\356\244\001\022\037\n\031MODEL_QUEUED_FO"
  "R_TRAINING\020\357\244\001\022\025\n\017MODEL_UPLOADING\020\360\244\001\022\034\n"
  "\026MODEL_UPLOADING_FAILED\020\361\244\001\022\034\n\026MODEL_TRA"
  "INING_NO_DATA\020\366\244\001\022!\n\033MODEL_TRAINING_NO_P"
  "OSITIVES\020\367\244\001\022*\n$MODEL_TRAINING_ONE_VS_N_"
  "SINGLE_CLASS\020\370\244\001\022\036\n\030MODEL_TRAINING_TIMED"
  "_OUT\020\371\244\001\022\"\n\034MODEL_TRAINING_WAITING_ERROR"
  "\020\372\244\001\022\"\n\034MODEL_TRAINING_UNKNOWN_ERROR\020\373\244\001"
  "\022&\n\034MODEL_TRAINING_MSG_REDELIVER\020\374\244\001\032\002\010\001"
  "\022&\n MODEL_TRAINING_INSUFFICIENT_DATA\020\375\244\001"
  "\022#\n\035MODEL_TRAINING_INVALID_PARAMS\020\376\244\001\0224\n"
  ".MODEL_TRAINING_INVALID_DATA_TOLERANCE_E"
  "XCEEDED\020\377\244\001\022\032\n\024MODEL_MODIFY_SUCCESS\020\236\245\001\022"
  "\032\n\024MODEL_MODIFY_PENDING\020\237\245\001\022\031\n\023MODEL_MOD"
  "IFY_FAILED\020\240\245\001\022\032\n\024MODEL_DOES_NOT_EXIST\020\320"
  "\245\001\022\035\n\027MODEL_PERMISSION_DENIED\020\321\245\001\022\034\n\026MOD"
  "EL_INVALID_ARGUMENT\020\322\245\001\022\033\n\025MODEL_INVALID"
  "_REQUEST\020\323\245\001\022\025\n\017MODEL_EVALUATED\020\264\246\001\022\026\n\020M"
  "ODEL_EVALUATING\020\265\246\001\022\031\n\023MODEL_NOT_EVALUAT"
  "ED\020\266\246\001\022!\n\033MODEL_QUEUED_FOR_EVALUATION\020\267\246"
  "\001\022 \n\032MODEL_EVALUATION_TIMED_OUT\020\276\246\001\022$\n\036M"
  "ODEL_EVALUATION_WAITING_ERROR\020\277\246\001\022$\n\036MOD"
  "EL_EVALUATION_UNKNOWN_ERROR\020\300\246\001\022\035\n\027MODEL"
  "_PREDICTION_FAILED\020\301\246\001\022(\n\036MODEL_EVALUATI"
  "ON_MSG_REDELIVER\020\302\246\001\032\002\010\001\022\"\n\034MODEL_EVALUA"
  "TION_NEED_LABELS\020\303\246\001\022\"\n\034MODEL_EVALUATION"
  "_NEED_INPUTS\020\304\246\001\022\035\n\027MODEL_DEPLOYMENT_FAI"
  "LED\020\346\246\001\022\025\n\017MODEL_DEPLOYING\020\347\246\001\022!\n\033MODEL_"
  "QUEUED_FOR_DEPLOYMENT\020\350\246\001\022\030\n\022MODEL_NOT_D"
  "EPLOYED\020\351\246\001\022&\n MODEL_REFERENCE_INVALID_A"
  "RGUMENT\020\230\247\001\022*\n$MODEL_EXAMPLE_INPUT_INVAL"
  "ID_ARGUMENT\020\254\247\001\022 \n\032WORKFLOW_NO_MATCHING_"
  "INPUT\020\361\253\001\022$\n\036WORKFLOW_REQUIRE_TRAINED_MO"
  "DEL\020\362\253\001\022\030\n\022WORKFLOW_DUPLICATE\020\324\254\001\022!\n\033WOR"
  "KFLOW_UNSUPPORTED_FORMAT\020\325\254\001\022\035\n\027WORKFLOW"
  "_DOES_NOT_EXIST\020\326\254\001\022 \n\032WORKFLOW_PERMISSI"
  "ON_DENIED\020\327\254\001\022\037\n\031WORKFLOW_INVALID_ARGUME"
  "NT\020\330\254\001\022\035\n\027WORKFLOW_INVALID_RECIPE\020\331\254\001\022\037\n"
  "\031WORKFLOW_INVALID_TEMPLATE\020\332\254\001\022\034\n\026WORKFL"
  "OW_INVALID_GRAPH\020\333\254\001\022\037\n\031WORKFLOW_INTERNA"
  "L_FAILURE\020\334\254\001\022\036\n\030WORKFLOW_INVALID_REQUES"
  "T\020\327\263\001\022\035\n\027WORKFLOW_MODIFY_SUCCESS\020\206\255\001\022\035\n\027"
  "WORKFLOW_MODIFY_PENDING\020\207\255\001\022\034\n\026WORKFLOW_"
  "MODIFY_FAILED\020\210\255\001\022\035\n\027WORKFLOW_REINDEX_FA"
  "ILED\020\211\255\001\022\034\n\026CONCEPT_MODIFY_SUCCESS\020\356\264\001\022\034"
  "\n\026CONCEPT_MODIFY_PENDING\020\357\264\001\022\033\n\025CONCEPT_"
  "MODIFY_FAILED\020\360\264\001\022\030\n\022ANNOTATION_SUCCESS\020"
  "\326\274\001\022\030\n\022ANNOTATION_PENDING\020\327\274\001\022\027\n\021ANNOTAT"
  "ION_FAILED\020\330\274\001\022\037\n\031ANNOTATION_UNKNOWN_STA"
  "TUS\020\332\274\001\022!\n\033ANNOTATION_INVALID_ARGUMENT\020\333"
  "\274\001\022\"\n\034ANNOTATION_PERMISSION_DENIED\020\334\274\001\022 "
  "\n\032ANNOTATION_AWAITING_REVIEW\020\335\274\001\022*\n$ANNO"
  "TATION_AWAITING_CONSENSUS_REVIEW\020\337\274\001\022\036\n\030"
  "ANNOTATION_REVIEW_DENIED\020\336\274\001\022\037\n\031ANNOTATI"
  "ON_MODIFY_SUCCESS\020\272\275\001\022\037\n\031ANNOTATION_MODI"
  "FY_PENDING\020\273\275\001\022\036\n\030ANNOTATION_MODIFY_FAIL"
  "ED\020\274\275\001\022&\n METADATA_INVALID_PATCH_ARGUMEN"
  "TS\020\304\302\001\022\034\n\026METADATA_PARSING_ISSUE\020\305\302\001\022!\n\033"
  "METADATA_MANIPULATION_ISSUE\020\306\302\001\022\034\n\026TRAIN"
  "ER_JOB_STATE_NONE\020\250\303\001\022\036\n\030TRAINER_JOB_STA"
  "TE_QUEUED\020\251\303\001\022\037\n\031TRAINER_JOB_STATE_RUNNI"
  "NG\020\252\303\001\022 \n\032TRAINER_JOB_STATE_COMPLETE\020\253\303\001"
  "\022\035\n\027TRAINER_JOB_STATE_ERROR\020\254\303\001\022\027\n\021DATA_"
  "DUMP_SUCCESS\020\276\304\001\022\027\n\021DATA_DUMP_PENDING\020\277\304"
  "\001\022\026\n\020DATA_DUMP_FAILED\020\300\304\001\022\033\n\025DATA_DUMP_I"
  "N_PROGRESS\020\301\304\001\022\027\n\021DATA_DUMP_NO_DATA\020\302\304\001\022"
  " \n\032DATA_DUMP_UNEXPECTED_ERROR\020\303\304\001\022\035\n\027APP"
  "_DUPLICATION_SUCCESS\020\360\304\001\022\034\n\026APP_DUPLICAT"
  "ION_FAILED\020\361\304\001\022\035\n\027APP_DUPLICATION_PENDIN"
  "G\020\362\304\001\022!\n\033APP_DUPLICATION_IN_PROGRESS\020\363\304\001"
  "\022%\n\037APP_DUPLICATION_INVALID_REQUEST\020\364\304\001\022"
  "\033\n\025MODULE_DOES_NOT_EXIST\020\324\305\001\022\036\n\030MODULE_P"
  "ERMISSION_DENIED\020\325\305\001\022\035\n\027MODULE_INVALID_A"
  "RGUMENT\020\326\305\001\022\034\n\026MODULE_INVALID_REQUEST\020\327\305"
  "\001\022\034\n\026BULK_OPERATION_SUCCESS\020\270\306\001\022\033\n\025BULK_"
  "OPERATION_FAILED\020\271\306\001\022\034\n\026BULK_OPERATION_P"
  "ENDING\020\272\306\001\022 \n\032BULK_OPERATION_IN_PROGRESS"
  "\020\273\306\001\022$\n\036BULK_OPERATION_INVALID_REQUEST\020\274"
  "\306\001\022\036\n\030BULK_OPERATION_CANCELLED\020\275\306\001\022%\n\037BU"
  "LK_OPERATION_UNEXPECTED_ERROR\020\276\306\001\022\034\n\026BUL"
  "K_OPERATION_DELETED\020\277\306\001\022\034\n\026INPUT_DOWNLOA"
  "D_SUCCESS\020\260\352\001\022\034\n\026INPUT_DOWNLOAD_PENDING\020"
  "\261\352\001\022\033\n\025INPUT_DOWNLOAD_FAILED\020\262\352\001\022 \n\032INPU"
  "T_DOWNLOAD_IN_PROGRESS\020\263\352\001\022 \n\032INPUT_STAT"
  "US_UPDATE_FAILED\020\264\352\001\022\031\n\023INPUT_DELETE_FAI"
  "LED\020\265\352\001\022\025\n\017INPUT_DUPLICATE\020\224\353\001\022\036\n\030INPUT_"
  "UNSUPPORTED_FORMAT\020\225\353\001\022\032\n\024INPUT_DOES_NOT"
  "_EXIST\020\226\353\001\022\035\n\027INPUT_PERMISSION_DENIED\020\227\353"
  "\001\022\034\n\026INPUT_INVALID_ARGUMENT\020\230\353\001\022\026\n\020INPUT"
  "_OVER_LIMIT\020\231\353\001\022\027\n\021INPUT_INVALID_URL\020\232\353\001"
  "\022\032\n\024INPUT_MODIFY_SUCCESS\020\370\353\001\022\032\n\024INPUT_MO"
  "DIFY_PENDING\020\371\353\001\022\031\n\023INPUT_MODIFY_FAILED\020"
  "\373\353\001\022\037\n\031INPUT_STORAGE_HOST_FAILED\020\202\354\001\022\035\n\027"
  "ALL_INPUT_INVALID_BYTES\020\334\354\001\022\033\n\025INPUT_CLU"
  "STER_SUCCESS\020\300\355\001\022\033\n\025INPUT_CLUSTER_PENDIN"
  "G\020\301\355\001\022\032\n\024INPUT_CLUSTER_FAILED\020\302\355\001\022\037\n\031INP"
  "UT_CLUSTER_IN_PROGRESS\020\303\355\001\022\033\n\025INPUT_REIN"
  "DEX_SUCCESS\020\244\356\001\022\033\n\025INPUT_REINDEX_PENDING"
  "\020\245\356\001\022\032\n\024INPUT_REINDEX_FAILED\020\246\356\001\022\037\n\031INPU"
  "T_REINDEX_IN_PROGRESS\020\247\356\001\022\"\n\034INPUT_VIDEO"
  "_DOWNLOAD_SUCCESS\020\230\362\001\022\"\n\034INPUT_VIDEO_DOW"
  "NLOAD_PENDING\020\231\362\001\022!\n\033INPUT_VIDEO_DOWNLOA"
  "D_FAILED\020\232\362\001\022\033\n\025INPUT_VIDEO_DUPLICATE\020\374\362"
  "\001\022$\n\036INPUT_VIDEO_UNSUPPORTED_FORMAT\020\375\362\001\022"
  " \n\032INPUT_VIDEO_DOES_NOT_EXIST\020\376\362\001\022#\n\035INP"
  "UT_VIDEO_PERMISSION_DENIED\020\377\362\001\022\"\n\034INPUT_"
  "VIDEO_INVALID_ARGUMENT\020\200\363\001\022\034\n\026INPUT_VIDE"
  "O_OVER_LIMIT\020\201\363\001\022\035\n\027INPUT_VIDEO_INVALID_"
  "URL\020\202\363\001\022 \n\032INPUT_VIDEO_MODIFY_SUCCESS\020\340\363"
  "\001\022 \n\032INPUT_VIDEO_MODIFY_PENDING\020\341\363\001\022\037\n\031I"
  "NPUT_VIDEO_MODIFY_FAILED\020\343\363\001\022%\n\037INPUT_VI"
  "DEO_STORAGE_HOST_FAILED\020\352\363\001\022$\n\036ALL_INPUT"
  "_VIDEOS_INVALID_BYTES\020\304\364\001\022\035\n\027INPUT_CONNE"
  "CTION_FAILED\020\274\270\002\022&\n REQUEST_DISABLED_FOR"
  "_MAINTENANCE\020\275\270\002\022+\n%INPUT_WRITES_DISABLE"
  "D_FOR_MAINTENANCE\020\276\270\002\022\033\n\025INPUT_INVALID_R"
  "EQUEST\020\277\270\002\022\035\n\027PREDICT_INVALID_REQUEST\020\301\270"
  "\002\022\034\n\026SEARCH_INVALID_REQUEST\020\302\270\002\022\036\n\030CONCE"
  "PTS_INVALID_REQUEST\020\303\270\002\022\033\n\025STATS_INVALID"
  "_REQUEST\020\304\270\002\022\034\n\026DATABASE_DUPLICATE_KEY\020\312"
  "\270\002\022 \n\032DATABASE_STATEMENT_TIMEOUT\020\313\270\002\022$\n\036"
  "DATABASE_INVALID_ROWS_AFFECTED\020\314\270\002\022 \n\032DA"
  "TABASE_DEADLOCK_DETECTED\020\315\270\002\022\030\n\022DATABASE"
  "_FAIL_TASK\020\316\270\002\022&\n DATABASE_FAIL_TO_GET_C"
  "ONNECTIONS\020\317\270\002\022\037\n\031DATABASE_TOO_MANY_CLIE"
  "NTS\020\320\270\002\022\"\n\034DATABASE_CONSTRAINT_VIOLATED\020"
  "\321\270\002\022\037\n\031ASYNC_WORKER_MULTI_ERRORS\020\324\270\002\022\034\n\026"
  "RPC_REQUEST_QUEUE_FULL\020\336\270\002\022\034\n\026RPC_SERVER"
  "_UNAVAILABLE\020\337\270\002\022\031\n\023RPC_REQUEST_TIMEOUT\020"
  "\340\270\002\022#\n\035RPC_MAX_MESSAGE_SIZE_EXCEEDED\020\341\270\002"
  "\022\022\n\014RPC_CANCELED\020\343\270\002\022\030\n\022RPC_UNKNOWN_METH"
  "OD\020\344\270\002\022\036\n\030REQUEST_CANCELED_BY_USER\020\345\270\002\022\036"
  "\n\030CLUSTER_INTERNAL_FAILURE\020\240\320\002\022\037\n\031EXTERN"
  "AL_CONNECTION_ERROR\020\342\270\002\022\026\n\020QUEUE_CONN_ER"
  "ROR\020\250\300\002\022!\n\033QUEUE_CLOSE_REQUEST_TIMEOUT\020\252"
  "\300\002\022\027\n\021QUEUE_CONN_CLOSED\020\253\300\002\022\037\n\031QUEUE_PUB"
  "LISH_ACK_TIMEOUT\020\254\300\002\022\031\n\023QUEUE_PUBLISH_ER"
  "ROR\020\255\300\002\022 \n\032QUEUE_SUBSCRIPTION_TIMEOUT\020\256\300"
  "\002\022\036\n\030QUEUE_SUBSCRIPTION_ERROR\020\257\300\002\022\036\n\030QUE"
  "UE_MARSHALLING_FAILED\020\260\300\002\022 \n\032QUEUE_UNMAR"
  "SHALLING_FAILED\020\261\300\002\022\'\n!QUEUE_MAX_MSG_RED"
  "ELIVERY_EXCEEDED\020\262\300\002\022\027\n\021QUEUE_ACK_FAILUR"
  "E\020\263\300\002\022\023\n\rSQS_OVERLIMIT\020\214\301\002\022 \n\032SQS_INVALI"
  "D_RECEIPT_HANDLE\020\215\301\002\022\021\n\013SQS_UNKNOWN\020\216\301\002\022"
  "\035\n\027SEARCH_INTERNAL_FAILURE\020\371\317\002\022\037\n\031SEARCH"
  "_PROJECTION_FAILURE\020\372\317\002\022\037\n\031SEARCH_PREDIC"
  "TION_FAILURE\020\373\317\002\022\'\n!SEARCH_BY_NOT_FULLY_"
  "INDEXED_INPUT\020\374\317\002\022 \n\032SAVED_SEARCH_MODIFY"
  "_FAILED\020\375\317\002\022\027\n\021EVALUATION_QUEUED\020\334\320\002\022\034\n\026"
  "EVALUATION_IN_PROGRESS\020\335\320\002\022\030\n\022EVALUATION"
  "_SUCCESS\020\336\320\002\022(\n\"EVALUATION_FAILED_TO_RET"
  "RIEVE_DATA\020\337\320\002\022!\n\033EVALUATION_INVALID_ARG"
  "UMENT\020\340\320\002\022\027\n\021EVALUATION_FAILED\020\341\320\002\022\030\n\022EV"
  "ALUATION_PENDING\020\342\320\002\022\032\n\024EVALUATION_TIMED"
  "_OUT\020\343\320\002\022!\n\033EVALUATION_UNEXPECTED_ERROR\020"
  "\344\320\002\022\026\n\020EVALUATION_MIXED\020\345\320\002\022\030\n\022STRIPE_EV"
  "ENT_ERROR\020\341\327\002\022\020\n\nCACHE_MISS\020\311\337\002\022&\n REDIS"
  "_SCRIPT_EXITED_WITH_FAILURE\020\312\337\002\022\026\n\020REDIS"
  "_STREAM_ERR\020\313\337\002\022\030\n\022REDIS_NO_CONSUMERS\020\314\337"
  "\002\022\032\n\024REDIS_STREAM_BACKOFF\020\315\337\002\022\030\n\022SIGNUP_"
  "EVENT_ERROR\020\261\347\002\022\024\n\016SIGNUP_FLAGGED\020\262\347\002\022\032\n"
  "\024FILETYPE_UNSUPPORTED\020\263\347\002\022\037\n\031APP_COUNT_I"
  "NVALID_MESSAGE\020\231\357\002\022\'\n!APP_COUNT_UPDATE_I"
  "NCREMENT_FAILED\020\232\357\002\022\036\n\030APP_COUNT_REBUILD"
  "_FAILED\020\233\357\002\022 \n\032APP_COUNT_INTERNAL_FAILUR"
  "E\020\234\357\002\022\027\n\021MP_DOWNLOAD_ERROR\020\375\357\002\022\032\n\024MP_RES"
  "OLVE_DNS_ERROR\020\376\357\002\022)\n#MP_DOWNLOAD_MAX_SI"
  "ZE_EXCEEDED_ERROR\020\377\357\002\022\033\n\025MP_IMAGE_DECODE"
  "_ERROR\020\200\360\002\022\031\n\023MP_INVALID_ARGUMENT\020\201\360\002\022\037\n"
  "\031MP_IMAGE_PROCESSING_ERROR\020\202\360\002\022\031\n\023DATATI"
  "ER_CONN_ERROR\020\341\360\002\022\027\n\021USER_CONSENT_FACE\020\321"
  "\206\003\022\024\n\016WORKER_MISSING\020\270\216\003\022\023\n\rWORKER_ACTIV"
  "E\020\271\216\003\022\025\n\017WORKER_INACTIVE\020\272\216\003\022\027\n\021COLLECTO"
  "R_MISSING\020\240\226\003\022\026\n\020COLLECTOR_ACTIVE\020\241\226\003\022\030\n"
  "\022COLLECTOR_INACTIVE\020\242\226\003\022!\n\033COLLECTOR_POS"
  "T_INPUT_FAILED\020\243\226\003\022*\n$SSO_IDENTITY_PROVI"
  "DER_DOES_NOT_EXIST\020\211\236\003\022\026\n\020TASK_IN_PROGRE"
  "SS\020\361\245\003\022\017\n\tTASK_DONE\020\362\245\003\022\022\n\014TASK_WONT_DO\020"
  "\363\245\003\022\"\n\034TASK_ADD_ANNOTATIONS_FAILURE\020\365\245\003\022"
  "\023\n\rTASK_CONFLICT\020\324\246\003\022\032\n\024TASK_NOT_IMPLEME"
  "NTED\020\325\246\003\022\022\n\014TASK_MISSING\020\326\246\003\022\031\n\023LABEL_OR"
  "DER_PENDING\020\331\255\003\022\035\n\027LABEL_ORDER_IN_PROGRE"
  "SS\020\332\255\003\022\031\n\023LABEL_ORDER_SUCCESS\020\333\255\003\022\032\n\024LAB"
  "EL_ORDER_CANCELED\020\334\255\003\022\024\n\016LICENSE_ACTIVE\020"
  "\340\324\003\022\034\n\026LICENSE_DOES_NOT_EXIST\020\341\324\003\022\031\n\023LIC"
  "ENSE_NEED_UPDATE\020\342\324\003\022\025\n\017LICENSE_EXPIRED\020"
  "\343\324\003\022\025\n\017LICENSE_REVOKED\020\344\324\003\022\025\n\017LICENSE_DE"
  "LETED\020\345\324\003\022\035\n\027LICENSE_VOLUME_EXCEEDED\020\346\324\003"
  "\022!\n\033PASSWORD_VALIDATION_SUCCESS\020\310\334\003\022 \n\032P"
  "ASSWORD_VALIDATION_FAILED\020\311\334\003\022%\n\037PASSWOR"
  "DPOLICY_INVALID_ARGUMENT\020\312\334\003\022\"\n\034FEATUREF"
  "LAG_CONFIG_NOT_FOUND\020\260\344\003\022\"\n\034FEATUREFLAG_"
  "INVALID_ARGUMENT\020\261\344\003\022\031\n\023FEATUREFLAG_BLOC"
  "KED\020\262\344\003\022\031\n\023MAINTENANCE_SUCCESS\020\230\354\003\022\030\n\022MA"
  "INTENANCE_FAILED\020\231\354\003\022\035\n\027DATASET_VERSION_"
  "PENDING\020\205\364\003\022!\n\033DATASET_VERSION_IN_PROGRE"
  "SS\020\212\364\003\022\033\n\025DATASET_VERSION_READY\020\217\364\003\022\035\n\027D"
  "ATASET_VERSION_FAILURE\020\224\364\003\022&\n DATASET_VE"
  "RSION_UNEXPECTED_ERROR\020\231\364\003\022\036\n\030DATASET_VE"
  "RSION_CONFLICT\020\236\364\003\022\033\n\025DATASET_INPUT_SUCC"
  "ESS\020\344\364\003\022\035\n\027DATASET_INPUT_DUPLICATE\020\345\364\003\022\020"
  "\n\nJOB_QUEUED\020\200\364\003\022\021\n\013JOB_RUNNING\020\201\364\003\022\023\n\rJ"
  "OB_COMPLETED\020\202\364\003\022\020\n\nJOB_FAILED\020\203\364\003\022\034\n\026AU"
  "TH_MISSING_IDP_ASSOC\020\350\373\003\022\033\n\025INTERNAL_SER"
  "VER_ISSUE\020\324\375\005\022\035\n\027INTERNAL_FETCHING_ISSUE"
  "\020\325\375\005\022\035\n\027INTERNAL_DATABASE_ISSUE\020\326\375\005\022!\n\033I"
  "NTERNAL_UNEXPECTED_TIMEOUT\020\331\375\005\022\034\n\026INTERN"
  "AL_UNEXPECTED_V1\020\332\375\005\022\037\n\031INTERNAL_UNEXPEC"
  "TED_PANIC\020\333\375\005\022\037\n\031INTERNAL_UNEXPECTED_SPI"
  "RE\020\334\375\005\022 \n\032INTERNAL_REDIS_UNAVAILABLE\020\335\375\005"
  "\022!\n\033INTERNAL_RESOURCE_EXHAUSTED\020\336\375\005\022\"\n\034I"
  "NTERNAL_REDIS_UNCATEGORIZED\020\337\375\005\022 \n\032INTER"
  "NAL_AWS_UNCATEGORIZED\020\340\375\005\022\"\n\034INTERNAL_AZ"
  "URE_UNCATEGORIZED\020\341\375\005\022\030\n\022CONN_UNCATEGORI"
  "ZED\020\271\205\006\022\031\n\023MODEL_UNCATEGORIZED\020\272\205\006\022\031\n\023IN"
  "PUT_UNCATEGORIZED\020\273\205\006\022\036\n\030ANNOTATION_UNCA"
  "TEGORIZED\020\274\205\006\022\033\n\025BILLING_UNCATEGORIZED\020\275"
  "\205\006\022\034\n\026INTERNAL_UNCATEGORIZED\020\301\205\006\022\021\n\013BAD_"
  "REQUEST\020\240\302\005\022\022\n\014SERVER_ERROR\020\204\303\005\"\010\010\350\201\002\020\350\201"
  "\002\"\010\010\351\201\002\020\351\201\002\"\010\010\352\201\002\020\352\201\002\"\010\010\314\202\002\020\314\202\002\"\010\010\315\202\002\020\315\202"
  "\002\"\010\010\316\202\002\020\316\202\002\"\010\010\317\202\002\020\317\202\002\"\010\010\320\202\002\020\320\202\002\"\010\010\321\202\002\020\321\202"
  "\002\"\010\010\322\202\002\020\322\202\002\"\010\010\260\203\002\020\260\203\002\"\010\010\261\203\002\020\261\203\002\"\010\010\263\203\002\020\263\203"
  "\002\"\010\010\272\203\002\020\272\203\002\"\010\010\273\270\002\020\273\270\002\"\010\010\322\270\002\020\322\270\002\"\010\010\323\270\002\020\323\270"
  "\002\"\010\010\360\301\002\020\360\301\002\"\010\010\361\301\002\020\361\301\002\"\010\010\362\301\002\020\362\301\002\"\010\010\363\301\002\020\363\301"
  "\002\"\010\010\364\301\002\020\364\301\002Bg\n\034com.clarifai.grpc.api.sta"
  "tusP\001Z>github.com/Clarifai/clarifai-go-g"
  "rpc/proto/clarifai/api/status\242\002\004CAIPb\006pr"
  "oto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto = {
  false, false, 9764, descriptor_table_protodef_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto, "proto/clarifai/api/status/status_code.proto", 
  &descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto::offsets,
  nullptr, file_level_enum_descriptors_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto, file_level_service_descriptors_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_getter() {
  return &descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto(&descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto);
namespace clarifai {
namespace api {
namespace status {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StatusCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto);
  return file_level_enum_descriptors_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto[0];
}
bool StatusCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 10000:
    case 10010:
    case 10020:
    case 10030:
    case 10040:
    case 10050:
    case 11000:
    case 11001:
    case 11002:
    case 11003:
    case 11004:
    case 11005:
    case 11006:
    case 11007:
    case 11008:
    case 11009:
    case 11100:
    case 11101:
    case 11102:
    case 11103:
    case 11104:
    case 11200:
    case 21100:
    case 21101:
    case 21102:
    case 21103:
    case 21104:
    case 21105:
    case 21110:
    case 21111:
    case 21112:
    case 21113:
    case 21114:
    case 21115:
    case 21116:
    case 21117:
    case 21118:
    case 21119:
    case 21150:
    case 21151:
    case 21152:
    case 21200:
    case 21201:
    case 21202:
    case 21203:
    case 21300:
    case 21301:
    case 21302:
    case 21303:
    case 21310:
    case 21311:
    case 21312:
    case 21313:
    case 21314:
    case 21315:
    case 21316:
    case 21350:
    case 21351:
    case 21352:
    case 21353:
    case 21400:
    case 21420:
    case 22001:
    case 22002:
    case 22100:
    case 22101:
    case 22102:
    case 22103:
    case 22104:
    case 22105:
    case 22106:
    case 22107:
    case 22108:
    case 22150:
    case 22151:
    case 22152:
    case 22153:
    case 22999:
    case 23150:
    case 23151:
    case 23152:
    case 24150:
    case 24151:
    case 24152:
    case 24154:
    case 24155:
    case 24156:
    case 24157:
    case 24158:
    case 24159:
    case 24250:
    case 24251:
    case 24252:
    case 24900:
    case 24901:
    case 24902:
    case 25000:
    case 25001:
    case 25002:
    case 25003:
    case 25004:
    case 25150:
    case 25151:
    case 25152:
    case 25153:
    case 25154:
    case 25155:
    case 25200:
    case 25201:
    case 25202:
    case 25203:
    case 25204:
    case 25300:
    case 25301:
    case 25302:
    case 25303:
    case 25400:
    case 25401:
    case 25402:
    case 25403:
    case 25404:
    case 25405:
    case 25406:
    case 25407:
    case 30000:
    case 30001:
    case 30002:
    case 30003:
    case 30004:
    case 30005:
    case 30100:
    case 30101:
    case 30102:
    case 30103:
    case 30104:
    case 30105:
    case 30106:
    case 30200:
    case 30201:
    case 30203:
    case 30210:
    case 30300:
    case 30400:
    case 30401:
    case 30402:
    case 30403:
    case 30500:
    case 30501:
    case 30502:
    case 30503:
    case 31000:
    case 31001:
    case 31002:
    case 31100:
    case 31101:
    case 31102:
    case 31103:
    case 31104:
    case 31105:
    case 31106:
    case 31200:
    case 31201:
    case 31203:
    case 31210:
    case 31300:
    case 39996:
    case 39997:
    case 39998:
    case 39999:
    case 40001:
    case 40002:
    case 40003:
    case 40004:
    case 40010:
    case 40011:
    case 40012:
    case 40013:
    case 40014:
    case 40015:
    case 40016:
    case 40017:
    case 40020:
    case 40030:
    case 40031:
    case 40032:
    case 40033:
    case 40034:
    case 40035:
    case 40036:
    case 40037:
    case 41000:
    case 41002:
    case 41003:
    case 41004:
    case 41005:
    case 41006:
    case 41007:
    case 41008:
    case 41009:
    case 41010:
    case 41011:
    case 41100:
    case 41101:
    case 41102:
    case 43001:
    case 43002:
    case 43003:
    case 43004:
    case 43005:
    case 43040:
    case 43100:
    case 43101:
    case 43102:
    case 43103:
    case 43104:
    case 43105:
    case 43106:
    case 43107:
    case 43108:
    case 43109:
    case 44001:
    case 45001:
    case 45002:
    case 45003:
    case 45004:
    case 45005:
    case 46001:
    case 46002:
    case 46003:
    case 47001:
    case 47002:
    case 47003:
    case 47004:
    case 47101:
    case 47102:
    case 47103:
    case 47104:
    case 47105:
    case 47106:
    case 47201:
    case 50001:
    case 51000:
    case 51001:
    case 51002:
    case 52000:
    case 52001:
    case 52002:
    case 52003:
    case 53001:
    case 54001:
    case 54002:
    case 54003:
    case 54005:
    case 54100:
    case 54101:
    case 54102:
    case 55001:
    case 55002:
    case 55003:
    case 55004:
    case 60000:
    case 60001:
    case 60002:
    case 60003:
    case 60004:
    case 60005:
    case 60006:
    case 61000:
    case 61001:
    case 61002:
    case 62000:
    case 62001:
    case 62002:
    case 63000:
    case 63001:
    case 64000:
    case 64001:
    case 64002:
    case 64003:
    case 64005:
    case 64010:
    case 64015:
    case 64020:
    case 64025:
    case 64030:
    case 64100:
    case 64101:
    case 65000:
    case 90400:
    case 90500:
    case 98004:
    case 98005:
    case 98006:
    case 98009:
    case 98010:
    case 98011:
    case 98012:
    case 98013:
    case 98014:
    case 98015:
    case 98016:
    case 98017:
    case 99001:
    case 99002:
    case 99003:
    case 99004:
    case 99005:
    case 99009:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace status
}  // namespace api
}  // namespace clarifai
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
