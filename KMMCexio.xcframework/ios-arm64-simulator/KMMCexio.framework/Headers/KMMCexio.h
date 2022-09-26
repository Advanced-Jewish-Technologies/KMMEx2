#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KMMCAccessKey, KMMCAccount, KMMCPortfolio, KMMCServiceLocator, KMMCKtor_client_coreHttpClient, KMMCAccountCompanion, KMMCPortfolioCompanion, KMMCWallet, KMMCKotlinThrowable, KMMCKotlinArray<T>, KMMCKotlinException, KMMCKotlinRuntimeException, KMMCKotlinIllegalStateException, KMMCKtor_client_coreHttpClientEngineConfig, KMMCKtor_client_coreHttpClientConfig<T>, KMMCKtor_eventsEvents, KMMCKtor_client_coreHttpReceivePipeline, KMMCKtor_client_coreHttpRequestPipeline, KMMCKtor_client_coreHttpResponsePipeline, KMMCKtor_client_coreHttpSendPipeline, KMMCKtor_client_coreHttpRequestData, KMMCKtor_client_coreHttpResponseData, KMMCKotlinx_coroutines_coreCoroutineDispatcher, KMMCKtor_client_coreProxyConfig, KMMCKtor_utilsAttributeKey<T>, KMMCKtor_eventsEventDefinition<T>, KMMCKtor_utilsPipelinePhase, KMMCKtor_utilsPipeline<TSubject, TContext>, KMMCKtor_client_coreHttpReceivePipelinePhases, KMMCKtor_client_coreHttpResponse, KMMCKotlinUnit, KMMCKtor_client_coreHttpRequestPipelinePhases, KMMCKtor_client_coreHttpRequestBuilder, KMMCKtor_client_coreHttpResponsePipelinePhases, KMMCKtor_client_coreHttpResponseContainer, KMMCKtor_client_coreHttpClientCall, KMMCKtor_client_coreHttpSendPipelinePhases, KMMCKotlinx_serialization_coreSerializersModule, KMMCKotlinx_serialization_coreSerialKind, KMMCKotlinNothing, KMMCKtor_httpUrl, KMMCKtor_httpHttpMethod, KMMCKtor_httpOutgoingContent, KMMCKtor_httpHttpStatusCode, KMMCKtor_utilsGMTDate, KMMCKtor_httpHttpProtocolVersion, KMMCKotlinAbstractCoroutineContextElement, KMMCKotlinx_coroutines_coreCoroutineDispatcherKey, KMMCKtor_httpHeadersBuilder, KMMCKtor_client_coreHttpRequestBuilderCompanion, KMMCKtor_httpURLBuilder, KMMCKtor_utilsTypeInfo, KMMCKtor_client_coreHttpClientCallCompanion, KMMCKtor_httpUrlCompanion, KMMCKtor_httpURLProtocol, KMMCKtor_httpHttpMethodCompanion, KMMCKtor_httpContentType, KMMCKotlinCancellationException, KMMCKtor_httpHttpStatusCodeCompanion, KMMCKtor_utilsGMTDateCompanion, KMMCKtor_utilsWeekDay, KMMCKtor_utilsMonth, KMMCKtor_httpHttpProtocolVersionCompanion, KMMCKotlinAbstractCoroutineContextKey<B, E>, KMMCKtor_ioMemory, KMMCKtor_ioChunkBuffer, KMMCKotlinByteArray, KMMCKtor_ioBuffer, KMMCKtor_ioByteReadPacket, KMMCKtor_utilsStringValuesBuilderImpl, KMMCKtor_httpURLBuilderCompanion, KMMCKtor_httpURLProtocolCompanion, KMMCKtor_httpHeaderValueParam, KMMCKtor_httpHeaderValueWithParametersCompanion, KMMCKtor_httpHeaderValueWithParameters, KMMCKtor_httpContentTypeCompanion, KMMCKotlinEnumCompanion, KMMCKotlinEnum<E>, KMMCKtor_utilsWeekDayCompanion, KMMCKtor_utilsMonthCompanion, KMMCKtor_ioMemoryCompanion, KMMCKtor_ioBufferCompanion, KMMCKtor_ioChunkBufferCompanion, KMMCKotlinByteIterator, KMMCKtor_ioInputCompanion, KMMCKtor_ioInput, KMMCKtor_ioByteReadPacketCompanion, KMMCKotlinKTypeProjection, KMMCKotlinx_coroutines_coreAtomicDesc, KMMCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, KMMCKotlinKVariance, KMMCKotlinKTypeProjectionCompanion, KMMCKotlinx_coroutines_coreAtomicOp<__contravariant T>, KMMCKotlinx_coroutines_coreOpDescriptor, KMMCKotlinx_coroutines_coreLockFreeLinkedListNode, KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol KMMCIDeposit, KMMCIPortfolio, KMMCKotlinKClassifier, KMMCKotlinx_serialization_coreKSerializer, KMMCKtor_client_coreHttpClientEngine, KMMCKotlinCoroutineContext, KMMCKotlinx_coroutines_coreCoroutineScope, KMMCKtor_ioCloseable, KMMCKtor_client_coreHttpClientEngineCapability, KMMCKtor_utilsAttributes, KMMCKotlinx_serialization_coreEncoder, KMMCKotlinx_serialization_coreSerialDescriptor, KMMCKotlinx_serialization_coreSerializationStrategy, KMMCKotlinx_serialization_coreDecoder, KMMCKotlinx_serialization_coreDeserializationStrategy, KMMCKotlinIterator, KMMCKotlinCoroutineContextElement, KMMCKotlinCoroutineContextKey, KMMCKtor_client_coreHttpClientPlugin, KMMCKotlinx_coroutines_coreDisposableHandle, KMMCKotlinSuspendFunction2, KMMCKotlinx_serialization_coreCompositeEncoder, KMMCKotlinAnnotation, KMMCKotlinx_serialization_coreCompositeDecoder, KMMCKtor_httpHeaders, KMMCKotlinx_coroutines_coreJob, KMMCKotlinContinuation, KMMCKotlinContinuationInterceptor, KMMCKotlinx_coroutines_coreRunnable, KMMCKotlinFunction, KMMCKtor_httpHttpMessage, KMMCKtor_ioByteReadChannel, KMMCKtor_httpHttpMessageBuilder, KMMCKtor_client_coreHttpRequest, KMMCKotlinx_serialization_coreSerializersModuleCollector, KMMCKotlinKClass, KMMCKtor_httpParameters, KMMCKotlinMapEntry, KMMCKtor_utilsStringValues, KMMCKotlinx_coroutines_coreChildHandle, KMMCKotlinx_coroutines_coreChildJob, KMMCKotlinSequence, KMMCKotlinx_coroutines_coreSelectClause0, KMMCKotlinComparable, KMMCKtor_ioReadSession, KMMCKotlinSuspendFunction1, KMMCKotlinAppendable, KMMCKtor_utilsStringValuesBuilder, KMMCKtor_httpParametersBuilder, KMMCKotlinKType, KMMCKotlinKDeclarationContainer, KMMCKotlinKAnnotatedElement, KMMCKotlinx_coroutines_coreParentJob, KMMCKotlinx_coroutines_coreSelectInstance, KMMCKotlinSuspendFunction0, KMMCKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KMMCBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KMMCBase (KMMCBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KMMCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KMMCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKMMCKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KMMCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface KMMCByte : KMMCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KMMCUByte : KMMCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KMMCShort : KMMCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KMMCUShort : KMMCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KMMCInt : KMMCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KMMCUInt : KMMCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KMMCLong : KMMCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KMMCULong : KMMCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KMMCFloat : KMMCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KMMCDouble : KMMCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KMMCBoolean : KMMCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessKey")))
@interface KMMCAccessKey : KMMCBase
- (instancetype)initWithAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken __attribute__((swift_name("init(accessToken:refreshToken:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCAccessKey *)doCopyAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken __attribute__((swift_name("doCopy(accessToken:refreshToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
@end;

__attribute__((swift_name("IDeposit")))
@protocol KMMCIDeposit
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)accountsWithCompletionHandler:(void (^)(NSArray<KMMCAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("accounts(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("confirm(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)operationWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("operation(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Deposit")))
@interface KMMCDeposit : KMMCBase <KMMCIDeposit>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)accountsWithCompletionHandler:(void (^)(NSArray<KMMCAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("accounts(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("confirm(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)operationWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("operation(completionHandler:)")));
@end;

__attribute__((swift_name("IPortfolio")))
@protocol KMMCIPortfolio
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)portfolioRateAsset:(NSString *)rateAsset asset:(NSString *)asset days:(int32_t)days completionHandler:(void (^)(NSArray<KMMCPortfolio *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("portfolio(rateAsset:asset:days:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Portfolio_")))
@interface KMMCPortfolio_ : KMMCBase <KMMCIPortfolio>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)portfolioRateAsset:(NSString *)rateAsset asset:(NSString *)asset days:(int32_t)days completionHandler:(void (^)(NSArray<KMMCPortfolio *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("portfolio(rateAsset:asset:days:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceLocator")))
@interface KMMCServiceLocator : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serviceLocator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCServiceLocator *shared __attribute__((swift_name("shared")));
- (id _Nullable)lookUpClazz:(id<KMMCKotlinKClassifier>)clazz __attribute__((swift_name("lookUp(clazz:)")));
@property NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property KMMCAccessKey *(^requestToken)(KMMCInt *) __attribute__((swift_name("requestToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketCommunicator")))
@interface KMMCSocketCommunicator : KMMCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) KMMCKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) NSString *echo __attribute__((swift_name("echo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wallet")))
@interface KMMCWallet : KMMCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)authorizationFn:(KMMCAccessKey *(^)(KMMCInt *))fn __attribute__((swift_name("authorization(fn:)")));
- (id<KMMCIDeposit>)deposit __attribute__((swift_name("deposit()")));
- (id<KMMCIPortfolio>)portfolio __attribute__((swift_name("portfolio()")));
@property NSString *baseUrl __attribute__((swift_name("baseUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Account")))
@interface KMMCAccount : KMMCBase
- (instancetype)initWithId:(NSString *)id assets:(NSArray<NSString *> *)assets type:(NSString *)type __attribute__((swift_name("init(id:assets:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCAccountCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCAccount *)doCopyId:(NSString *)id assets:(NSArray<NSString *> *)assets type:(NSString *)type __attribute__((swift_name("doCopy(id:assets:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *assets __attribute__((swift_name("assets")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Account.Companion")))
@interface KMMCAccountCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCAccountCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("IWithdrawal")))
@protocol KMMCIWithdrawal
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("confirm(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)operationWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("operation(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Portfolio")))
@interface KMMCPortfolio : KMMCBase
- (instancetype)initWithDate:(NSString *)date stringValue:(NSString *)stringValue __attribute__((swift_name("init(date:stringValue:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCPortfolioCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCPortfolio *)doCopyDate:(NSString *)date stringValue:(NSString *)stringValue __attribute__((swift_name("doCopy(date:stringValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *date __attribute__((swift_name("date")));
@property (readonly) NSString *stringValue __attribute__((swift_name("stringValue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Portfolio.Companion")))
@interface KMMCPortfolioCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCPortfolioCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientFactoryKt")))
@interface KMMCHttpClientFactoryKt : KMMCBase
@property (class, readonly) id<KMMCKtor_client_coreHttpClientEngine> clientEngine __attribute__((swift_name("clientEngine")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WalletKt")))
@interface KMMCWalletKt : KMMCBase
+ (KMMCWallet *)WalletFn:(void (^)(KMMCWallet *))fn __attribute__((swift_name("Wallet(fn:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface KMMCKotlinThrowable : KMMCBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KMMCKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface KMMCKotlinException : KMMCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface KMMCKotlinRuntimeException : KMMCKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KMMCKotlinIllegalStateException : KMMCKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface KMMCKotlinCancellationException : KMMCKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol KMMCKotlinKClassifier
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KMMCKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<KMMCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol KMMCKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface KMMCKtor_client_coreHttpClient : KMMCBase <KMMCKotlinx_coroutines_coreCoroutineScope, KMMCKtor_ioCloseable>
- (instancetype)initWithEngine:(id<KMMCKtor_client_coreHttpClientEngine>)engine userConfig:(KMMCKtor_client_coreHttpClientConfig<KMMCKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (KMMCKtor_client_coreHttpClient *)configBlock:(void (^)(KMMCKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<KMMCKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KMMCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<KMMCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<KMMCKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) KMMCKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) KMMCKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) KMMCKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) KMMCKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) KMMCKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) KMMCKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KMMCKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KMMCKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMMCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KMMCKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KMMCKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KMMCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KMMCKotlinx_serialization_coreKSerializer <KMMCKotlinx_serialization_coreSerializationStrategy, KMMCKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol KMMCKtor_client_coreHttpClientEngine <KMMCKotlinx_coroutines_coreCoroutineScope, KMMCKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(KMMCKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(KMMCKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(KMMCKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) KMMCKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) KMMCKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<KMMCKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KMMCKotlinArray<T> : KMMCBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KMMCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KMMCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KMMCKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KMMCKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KMMCKotlinCoroutineContextElement> _Nullable)getKey:(id<KMMCKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KMMCKotlinCoroutineContext>)minusKeyKey:(id<KMMCKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KMMCKotlinCoroutineContext>)plusContext:(id<KMMCKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface KMMCKtor_client_coreHttpClientEngineConfig : KMMCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property KMMCKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface KMMCKtor_client_coreHttpClientConfig<T> : KMMCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KMMCKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(KMMCKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<KMMCKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(KMMCKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(KMMCKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol KMMCKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol KMMCKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(KMMCKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(KMMCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(KMMCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(KMMCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(KMMCKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(KMMCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(KMMCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(KMMCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<KMMCKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface KMMCKtor_eventsEvents : KMMCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(KMMCKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<KMMCKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(KMMCKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(KMMCKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface KMMCKtor_utilsPipeline<TSubject, TContext> : KMMCBase
- (instancetype)initWithPhase:(KMMCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KMMCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KMMCKotlinArray<KMMCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(KMMCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(KMMCKtor_utilsPipelinePhase *)reference phase:(KMMCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(KMMCKtor_utilsPipelinePhase *)reference phase:(KMMCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(KMMCKtor_utilsPipelinePhase *)phase block:(id<KMMCKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<KMMCKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(KMMCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(KMMCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(KMMCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(KMMCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<KMMCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<KMMCKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface KMMCKtor_client_coreHttpReceivePipeline : KMMCKtor_utilsPipeline<KMMCKtor_client_coreHttpResponse *, KMMCKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KMMCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KMMCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KMMCKotlinArray<KMMCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMCKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface KMMCKtor_client_coreHttpRequestPipeline : KMMCKtor_utilsPipeline<id, KMMCKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KMMCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KMMCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KMMCKotlinArray<KMMCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMCKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface KMMCKtor_client_coreHttpResponsePipeline : KMMCKtor_utilsPipeline<KMMCKtor_client_coreHttpResponseContainer *, KMMCKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KMMCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KMMCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KMMCKotlinArray<KMMCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMCKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface KMMCKtor_client_coreHttpSendPipeline : KMMCKtor_utilsPipeline<id, KMMCKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KMMCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KMMCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KMMCKotlinArray<KMMCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMCKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KMMCKotlinx_serialization_coreEncoder
@required
- (id<KMMCKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KMMCKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KMMCKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<KMMCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KMMCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KMMCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KMMCKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KMMCKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KMMCKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KMMCKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KMMCKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KMMCKotlinx_serialization_coreDecoder
@required
- (id<KMMCKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KMMCKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (KMMCKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KMMCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KMMCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KMMCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface KMMCKtor_client_coreHttpRequestData : KMMCBase
- (instancetype)initWithUrl:(KMMCKtor_httpUrl *)url method:(KMMCKtor_httpHttpMethod *)method headers:(id<KMMCKtor_httpHeaders>)headers body:(KMMCKtor_httpOutgoingContent *)body executionContext:(id<KMMCKotlinx_coroutines_coreJob>)executionContext attributes:(id<KMMCKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<KMMCKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KMMCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KMMCKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<KMMCKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<KMMCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KMMCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KMMCKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface KMMCKtor_client_coreHttpResponseData : KMMCBase
- (instancetype)initWithStatusCode:(KMMCKtor_httpHttpStatusCode *)statusCode requestTime:(KMMCKtor_utilsGMTDate *)requestTime headers:(id<KMMCKtor_httpHeaders>)headers version:(KMMCKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<KMMCKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<KMMCKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<KMMCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KMMCKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KMMCKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KMMCKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) KMMCKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KMMCKotlinCoroutineContextElement <KMMCKotlinCoroutineContext>
@required
@property (readonly) id<KMMCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KMMCKotlinAbstractCoroutineContextElement : KMMCBase <KMMCKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KMMCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KMMCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KMMCKotlinContinuationInterceptor <KMMCKotlinCoroutineContextElement>
@required
- (id<KMMCKotlinContinuation>)interceptContinuationContinuation:(id<KMMCKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KMMCKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KMMCKotlinx_coroutines_coreCoroutineDispatcher : KMMCKotlinAbstractCoroutineContextElement <KMMCKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KMMCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMCKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<KMMCKotlinCoroutineContext>)context block:(id<KMMCKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<KMMCKotlinCoroutineContext>)context block:(id<KMMCKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KMMCKotlinContinuation>)interceptContinuationContinuation:(id<KMMCKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KMMCKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (KMMCKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (KMMCKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(KMMCKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KMMCKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KMMCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KMMCKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface KMMCKtor_client_coreProxyConfig : KMMCBase
- (instancetype)initWithUrl:(KMMCKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMCKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol KMMCKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(KMMCKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) KMMCKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface KMMCKtor_utilsAttributeKey<T> : KMMCBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface KMMCKtor_eventsEventDefinition<T> : KMMCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol KMMCKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface KMMCKtor_utilsPipelinePhase : KMMCBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol KMMCKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol KMMCKotlinSuspendFunction2 <KMMCKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface KMMCKtor_client_coreHttpReceivePipelinePhases : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KMMCKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KMMCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol KMMCKtor_httpHttpMessage
@required
@property (readonly) id<KMMCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface KMMCKtor_client_coreHttpResponse : KMMCBase <KMMCKtor_httpHttpMessage, KMMCKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMCKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<KMMCKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) KMMCKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KMMCKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KMMCKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) KMMCKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KMMCKotlinUnit : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface KMMCKtor_client_coreHttpRequestPipelinePhases : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) KMMCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol KMMCKtor_httpHttpMessageBuilder
@required
@property (readonly) KMMCKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface KMMCKtor_client_coreHttpRequestBuilder : KMMCBase <KMMCKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KMMCKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KMMCKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<KMMCKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<KMMCKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<KMMCKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (KMMCKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(KMMCKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (KMMCKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(KMMCKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(KMMCKtor_httpURLBuilder *, KMMCKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<KMMCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property KMMCKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<KMMCKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) KMMCKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property KMMCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KMMCKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface KMMCKtor_client_coreHttpResponsePipelinePhases : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KMMCKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) KMMCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface KMMCKtor_client_coreHttpResponseContainer : KMMCBase
- (instancetype)initWithExpectedType:(KMMCKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (KMMCKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(KMMCKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMCKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface KMMCKtor_client_coreHttpClientCall : KMMCBase <KMMCKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(KMMCKtor_client_coreHttpClient *)client requestData:(KMMCKtor_client_coreHttpRequestData *)requestData responseData:(KMMCKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(KMMCKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(KMMCKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(KMMCKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<KMMCKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<KMMCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KMMCKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<KMMCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<KMMCKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property KMMCKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface KMMCKtor_client_coreHttpSendPipelinePhases : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) KMMCKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) KMMCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KMMCKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KMMCKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KMMCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KMMCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KMMCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KMMCKotlinx_serialization_coreSerializersModule : KMMCBase
- (void)dumpToCollector:(id<KMMCKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<KMMCKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KMMCKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KMMCKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<KMMCKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KMMCKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<KMMCKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KMMCKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol KMMCKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KMMCKotlinx_serialization_coreSerialKind : KMMCBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KMMCKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KMMCKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KMMCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KMMCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KMMCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KMMCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KMMCKotlinNothing : KMMCBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface KMMCKtor_httpUrl : KMMCBase
@property (class, readonly, getter=companion) KMMCKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KMMCKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) KMMCKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface KMMCKtor_httpHttpMethod : KMMCBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol KMMCKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KMMCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol KMMCKtor_httpHeaders <KMMCKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface KMMCKtor_httpOutgoingContent : KMMCBase
- (id _Nullable)getPropertyKey:(KMMCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(KMMCKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<KMMCKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) KMMCLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) KMMCKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<KMMCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KMMCKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol KMMCKotlinx_coroutines_coreJob <KMMCKotlinCoroutineContextElement>
@required
- (id<KMMCKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<KMMCKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(KMMCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (KMMCKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<KMMCKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KMMCKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<KMMCKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(KMMCKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<KMMCKotlinx_coroutines_coreJob>)plusOther_:(id<KMMCKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<KMMCKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<KMMCKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface KMMCKtor_httpHttpStatusCode : KMMCBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (KMMCKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KMMCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface KMMCKtor_utilsGMTDate : KMMCBase <KMMCKotlinComparable>
@property (class, readonly, getter=companion) KMMCKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KMMCKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKtor_utilsMonth *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KMMCKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KMMCKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) KMMCKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) KMMCKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface KMMCKtor_httpHttpProtocolVersion : KMMCBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol KMMCKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KMMCKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface KMMCKotlinAbstractCoroutineContextKey<B, E> : KMMCBase <KMMCKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<KMMCKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<KMMCKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface KMMCKotlinx_coroutines_coreCoroutineDispatcherKey : KMMCKotlinAbstractCoroutineContextKey<id<KMMCKotlinContinuationInterceptor>, KMMCKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<KMMCKotlinCoroutineContextKey>)baseKey safeCast:(id<KMMCKotlinCoroutineContextElement> _Nullable (^)(id<KMMCKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KMMCKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol KMMCKtor_ioByteReadChannel
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(KMMCKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(KMMCLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(KMMCKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(KMMCLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(KMMCKtor_ioChunkBuffer *)dst completionHandler:(void (^)(KMMCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(KMMCKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(KMMCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(KMMCKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(KMMCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(KMMCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(KMMCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(KMMCByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(KMMCDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(KMMCFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(KMMCKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(KMMCKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(KMMCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(KMMCLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(KMMCKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(KMMCKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<KMMCKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(KMMCShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<KMMCKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<KMMCKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(KMMCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) KMMCKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol KMMCKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KMMCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KMMCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KMMCKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KMMCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface KMMCKtor_utilsStringValuesBuilderImpl : KMMCBase <KMMCKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KMMCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KMMCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KMMCKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KMMCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) KMMCMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface KMMCKtor_httpHeadersBuilder : KMMCKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<KMMCKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface KMMCKtor_client_coreHttpRequestBuilderCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface KMMCKtor_httpURLBuilder : KMMCBase
- (instancetype)initWithProtocol:(KMMCKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<KMMCKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KMMCKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<KMMCKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KMMCKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property KMMCKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface KMMCKtor_utilsTypeInfo : KMMCBase
- (instancetype)initWithType:(id<KMMCKotlinKClass>)type reifiedType:(id<KMMCKotlinKType>)reifiedType kotlinType:(id<KMMCKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<KMMCKotlinKClass>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KMMCKotlinKType>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KMMCKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKtor_utilsTypeInfo *)doCopyType:(id<KMMCKotlinKClass>)type reifiedType:(id<KMMCKotlinKType>)reifiedType kotlinType:(id<KMMCKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KMMCKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<KMMCKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<KMMCKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface KMMCKtor_client_coreHttpClientCallCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMMCKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol KMMCKtor_client_coreHttpRequest <KMMCKtor_httpHttpMessage, KMMCKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<KMMCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KMMCKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) KMMCKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) KMMCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KMMCKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KMMCKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KMMCKotlinKClass>)kClass provider:(id<KMMCKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KMMCKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KMMCKotlinKClass>)kClass serializer:(id<KMMCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KMMCKotlinKClass>)baseClass actualClass:(id<KMMCKotlinKClass>)actualClass actualSerializer:(id<KMMCKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KMMCKotlinKClass>)baseClass defaultDeserializerProvider:(id<KMMCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KMMCKotlinKClass>)baseClass defaultDeserializerProvider:(id<KMMCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KMMCKotlinKClass>)baseClass defaultSerializerProvider:(id<KMMCKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KMMCKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KMMCKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol KMMCKotlinKClass <KMMCKotlinKDeclarationContainer, KMMCKotlinKAnnotatedElement, KMMCKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface KMMCKtor_httpUrlCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol KMMCKtor_httpParameters <KMMCKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface KMMCKtor_httpURLProtocol : KMMCBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface KMMCKtor_httpHttpMethodCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (KMMCKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<KMMCKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) KMMCKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) KMMCKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) KMMCKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) KMMCKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) KMMCKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) KMMCKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) KMMCKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol KMMCKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface KMMCKtor_httpHeaderValueWithParameters : KMMCBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KMMCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<KMMCKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface KMMCKtor_httpContentType : KMMCKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<KMMCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KMMCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMCKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(KMMCKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (KMMCKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (KMMCKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol KMMCKotlinx_coroutines_coreChildHandle <KMMCKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(KMMCKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<KMMCKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol KMMCKotlinx_coroutines_coreChildJob <KMMCKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<KMMCKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol KMMCKotlinSequence
@required
- (id<KMMCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol KMMCKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<KMMCKotlinx_coroutines_coreSelectInstance>)select block:(id<KMMCKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface KMMCKtor_httpHttpStatusCodeCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (KMMCKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) KMMCKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) KMMCKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) KMMCKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) KMMCKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) KMMCKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) KMMCKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) KMMCKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) KMMCKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) KMMCKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) KMMCKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) KMMCKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) KMMCKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) KMMCKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) KMMCKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) KMMCKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) KMMCKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) KMMCKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) KMMCKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) KMMCKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) KMMCKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) KMMCKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) KMMCKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) KMMCKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) KMMCKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) KMMCKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) KMMCKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) KMMCKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) KMMCKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) KMMCKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) KMMCKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) KMMCKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) KMMCKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) KMMCKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) KMMCKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) KMMCKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) KMMCKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) KMMCKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) KMMCKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) KMMCKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) KMMCKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) KMMCKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) KMMCKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) KMMCKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) KMMCKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) KMMCKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) KMMCKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) KMMCKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) KMMCKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) KMMCKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) KMMCKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) KMMCKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) KMMCKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<KMMCKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface KMMCKtor_utilsGMTDateCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMMCKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KMMCKotlinEnum<E> : KMMCBase <KMMCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface KMMCKtor_utilsWeekDay : KMMCKotlinEnum<KMMCKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMCKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KMMCKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) KMMCKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) KMMCKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) KMMCKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) KMMCKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) KMMCKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) KMMCKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (KMMCKotlinArray<KMMCKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface KMMCKtor_utilsMonth : KMMCKotlinEnum<KMMCKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMCKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KMMCKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) KMMCKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) KMMCKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) KMMCKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) KMMCKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) KMMCKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) KMMCKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) KMMCKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) KMMCKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) KMMCKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) KMMCKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) KMMCKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (KMMCKotlinArray<KMMCKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface KMMCKtor_httpHttpProtocolVersionCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (KMMCKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (KMMCKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) KMMCKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) KMMCKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) KMMCKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) KMMCKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) KMMCKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface KMMCKtor_ioMemory : KMMCBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(KMMCKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(KMMCKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (KMMCKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (KMMCKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface KMMCKtor_ioBuffer : KMMCBase
- (instancetype)initWithMemory:(KMMCKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (KMMCKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(KMMCKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) KMMCKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface KMMCKtor_ioChunkBuffer : KMMCKtor_ioBuffer
- (instancetype)initWithMemory:(KMMCKtor_ioMemory *)memory origin:(KMMCKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<KMMCKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(KMMCKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMCKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (KMMCKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (KMMCKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<KMMCKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) KMMCKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) KMMCKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KMMCKotlinByteArray : KMMCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KMMCByte *(^)(KMMCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KMMCKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface KMMCKtor_ioInput : KMMCBase <KMMCKtor_ioCloseable>
- (instancetype)initWithHead:(KMMCKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KMMCKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (KMMCKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(KMMCKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(KMMCKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(KMMCKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<KMMCKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<KMMCKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<KMMCKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface KMMCKtor_ioByteReadPacket : KMMCKtor_ioInput
- (instancetype)initWithHead:(KMMCKtor_ioChunkBuffer *)head pool:(id<KMMCKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(KMMCKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KMMCKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMCKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (KMMCKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (KMMCKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(KMMCKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol KMMCKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (KMMCKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol KMMCKotlinSuspendFunction1 <KMMCKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol KMMCKotlinAppendable
@required
- (id<KMMCKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<KMMCKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<KMMCKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface KMMCKtor_httpURLBuilderCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol KMMCKtor_httpParametersBuilder <KMMCKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((swift_name("KotlinKType")))
@protocol KMMCKotlinKType
@required
@property (readonly) NSArray<KMMCKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<KMMCKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface KMMCKtor_httpURLProtocolCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (KMMCKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) KMMCKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) KMMCKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) KMMCKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) KMMCKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) KMMCKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, KMMCKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface KMMCKtor_httpHeaderValueParam : KMMCBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface KMMCKtor_httpHeaderValueWithParametersCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<KMMCKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface KMMCKtor_httpContentTypeCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (KMMCKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) KMMCKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol KMMCKotlinx_coroutines_coreParentJob <KMMCKotlinx_coroutines_coreJob>
@required
- (KMMCKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol KMMCKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<KMMCKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(KMMCKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(KMMCKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<KMMCKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol KMMCKotlinSuspendFunction0 <KMMCKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KMMCKotlinEnumCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface KMMCKtor_utilsWeekDayCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (KMMCKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (KMMCKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface KMMCKtor_utilsMonthCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (KMMCKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (KMMCKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface KMMCKtor_ioMemoryCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMMCKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface KMMCKtor_ioBufferCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMMCKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol KMMCKtor_ioObjectPool <KMMCKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface KMMCKtor_ioChunkBufferCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMMCKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<KMMCKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<KMMCKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KMMCKotlinByteIterator : KMMCBase <KMMCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KMMCByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface KMMCKtor_ioInputCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface KMMCKtor_ioByteReadPacketCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KMMCKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface KMMCKotlinKTypeProjection : KMMCBase
- (instancetype)initWithVariance:(KMMCKotlinKVariance * _Nullable)variance type:(id<KMMCKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMCKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (KMMCKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KMMCKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KMMCKotlinKTypeProjection *)doCopyVariance:(KMMCKotlinKVariance * _Nullable)variance type:(id<KMMCKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KMMCKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) KMMCKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface KMMCKotlinx_coroutines_coreAtomicDesc : KMMCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(KMMCKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(KMMCKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property KMMCKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface KMMCKotlinx_coroutines_coreOpDescriptor : KMMCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(KMMCKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMCKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface KMMCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : KMMCKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) KMMCKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface KMMCKotlinKVariance : KMMCKotlinEnum<KMMCKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KMMCKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) KMMCKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) KMMCKotlinKVariance *out __attribute__((swift_name("out")));
+ (KMMCKotlinArray<KMMCKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface KMMCKotlinKTypeProjectionCompanion : KMMCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMCKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (KMMCKotlinKTypeProjection *)contravariantType:(id<KMMCKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (KMMCKotlinKTypeProjection *)covariantType:(id<KMMCKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (KMMCKotlinKTypeProjection *)invariantType:(id<KMMCKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) KMMCKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface KMMCKotlinx_coroutines_coreAtomicOp<__contravariant T> : KMMCKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) KMMCKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface KMMCKotlinx_coroutines_coreLockFreeLinkedListNode : KMMCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(KMMCBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(KMMCBoolean *(^)(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(KMMCBoolean *(^)(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(KMMCBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (KMMCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(KMMCBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (KMMCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : KMMCKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(KMMCKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(KMMCKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (KMMCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(KMMCKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (KMMCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(KMMCKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : KMMCKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (KMMCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(KMMCKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) KMMCKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
