#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class WalletApiAccessKey, WalletApiLinkPaymentResponse, WalletApiClients, WalletApiAccount, WalletApiConfirmCode, WalletApiOperationConfirmResponse, WalletApiSource, WalletApiDestination, WalletApiOperationResponse, WalletApiSuspendWrapper<T>, WalletApiEventCompanion, WalletApiEvent<T>, WalletApiKotlinArray<T>, WalletApiEventTypeCompanion, WalletApiEventType, WalletApiEventsCompanion, WalletApiEvents, WalletApiEventsAuthStatusCompanion, WalletApiEventsAuthStatus, WalletApiEventsEchoCompanion, WalletApiEventsUrlCompanion, WalletApiFormFields, WalletApiIBankingCompanion, WalletApiPortfolio, WalletApiServiceLocator, WalletApiSocketCommunicator, WalletApiSocketCommunicatorCompanion, WalletApiKtor_client_coreDefaultClientWebSocketSession, WalletApiKotlinUnit, WalletApiKtor_client_coreHttpClient, WalletApiSocketFactory, WalletApiKtor_websocketsFrame, WalletApiWalletEnv, WalletApiAccountInfo, WalletApiAccountCompanion, WalletApiOutputMethodsResponse, WalletApiInputMethodsResponse, WalletApiAccountInfoCompanion, WalletApiProvider, WalletApiBrowserCompanion, WalletApiDevice, WalletApiTime, WalletApiBrowser, WalletApiRedirect, WalletApiCVVCompanion, WalletApiConfirmCodeCompanion, WalletApiCVV, WalletApiDepositRequestCompanion, WalletApiDestinationCompanion, WalletApiDeviceCompanion, WalletApiFeeCompanion, WalletApiKotlinThrowable, WalletApiInputMethodsResponseCompanion, WalletApiLinkBankPaymentMethodRequestCompanion, WalletApiLinkPaymentMethodRequestCompanion, WalletApiLinkPaymentMethodRequest, WalletApiLinkPaymentResponseCompanion, WalletApiParams, WalletApiOperationConfirmRequestCompanion, WalletApiFee, WalletApiOperationConfirmResponseCompanion, WalletApiOperationRequest, WalletApiOperationRequestCompanion, WalletApiRequestOperationResult, WalletApiOperationResponseCompanion, WalletApiOutputMethodsResponseCompanion, WalletApiParamsCompanion, WalletApiPortfolioCompanion, WalletApiRedirectCompanion, WalletApiRequestOperationResultCompanion, WalletApiSourceCompanion, WalletApiTimeCompanion, WalletApiWallet, WalletApiKotlinException, WalletApiKotlinRuntimeException, WalletApiKotlinIllegalStateException, WalletApiKtor_client_coreHttpClientCall, WalletApiKtor_client_coreHttpClientEngineConfig, WalletApiKtor_client_coreHttpClientConfig<T>, WalletApiKtor_eventsEvents, WalletApiKtor_client_coreHttpReceivePipeline, WalletApiKtor_client_coreHttpRequestPipeline, WalletApiKtor_client_coreHttpResponsePipeline, WalletApiKtor_client_coreHttpSendPipeline, WalletApiKtor_ioCharset, WalletApiKtor_utilsTypeInfo, WalletApiKtor_websocketsFrameCompanion, WalletApiKotlinByteArray, WalletApiKtor_websocketsFrameType, WalletApiKotlinCancellationException, WalletApiKtor_client_coreHttpRequestData, WalletApiKtor_client_coreHttpResponseData, WalletApiKotlinx_coroutines_coreCoroutineDispatcher, WalletApiKotlinx_serialization_coreSerializersModule, WalletApiKotlinx_serialization_coreSerialKind, WalletApiKotlinNothing, WalletApiKtor_client_coreHttpClientCallCompanion, WalletApiKtor_client_coreHttpResponse, WalletApiKtor_websocketsWebSocketExtensionHeader, WalletApiKtor_client_coreProxyConfig, WalletApiKtor_utilsAttributeKey<T>, WalletApiKtor_eventsEventDefinition<T>, WalletApiKtor_utilsPipelinePhase, WalletApiKtor_utilsPipeline<TSubject, TContext>, WalletApiKtor_client_coreHttpReceivePipelinePhases, WalletApiKtor_client_coreHttpRequestPipelinePhases, WalletApiKtor_client_coreHttpRequestBuilder, WalletApiKtor_client_coreHttpResponsePipelinePhases, WalletApiKtor_client_coreHttpResponseContainer, WalletApiKtor_client_coreHttpSendPipelinePhases, WalletApiKtor_ioCharsetCompanion, WalletApiKtor_ioCharsetDecoder, WalletApiKtor_ioCharsetEncoder, WalletApiKotlinByteIterator, WalletApiKotlinEnumCompanion, WalletApiKotlinEnum<E>, WalletApiKtor_websocketsFrameTypeCompanion, WalletApiKtor_httpUrl, WalletApiKtor_httpHttpMethod, WalletApiKtor_httpOutgoingContent, WalletApiKtor_httpHttpStatusCode, WalletApiKtor_utilsGMTDate, WalletApiKtor_httpHttpProtocolVersion, WalletApiKotlinAbstractCoroutineContextElement, WalletApiKotlinx_coroutines_coreCoroutineDispatcherKey, WalletApiKtor_ioMemory, WalletApiKtor_ioChunkBuffer, WalletApiKtor_ioBuffer, WalletApiKtor_ioByteReadPacket, WalletApiKtor_httpHeadersBuilder, WalletApiKtor_client_coreHttpRequestBuilderCompanion, WalletApiKtor_httpURLBuilder, WalletApiKotlinKTypeProjection, WalletApiKotlinx_coroutines_coreAtomicDesc, WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, WalletApiKtor_httpUrlCompanion, WalletApiKtor_httpURLProtocol, WalletApiKtor_httpHttpMethodCompanion, WalletApiKtor_httpContentType, WalletApiKtor_httpHttpStatusCodeCompanion, WalletApiKtor_utilsGMTDateCompanion, WalletApiKtor_utilsWeekDay, WalletApiKtor_utilsMonth, WalletApiKtor_httpHttpProtocolVersionCompanion, WalletApiKotlinAbstractCoroutineContextKey<B, E>, WalletApiKtor_ioMemoryCompanion, WalletApiKtor_ioBufferCompanion, WalletApiKtor_ioChunkBufferCompanion, WalletApiKtor_ioInputCompanion, WalletApiKtor_ioInput, WalletApiKtor_ioByteReadPacketCompanion, WalletApiKtor_utilsStringValuesBuilderImpl, WalletApiKtor_httpURLBuilderCompanion, WalletApiKotlinKVariance, WalletApiKotlinKTypeProjectionCompanion, WalletApiKotlinx_coroutines_coreAtomicOp<__contravariant T>, WalletApiKotlinx_coroutines_coreOpDescriptor, WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode, WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, WalletApiKtor_httpURLProtocolCompanion, WalletApiKtor_httpHeaderValueParam, WalletApiKtor_httpHeaderValueWithParametersCompanion, WalletApiKtor_httpHeaderValueWithParameters, WalletApiKtor_httpContentTypeCompanion, WalletApiKtor_utilsWeekDayCompanion, WalletApiKtor_utilsMonthCompanion, WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol WalletApiKotlinx_coroutines_coreFlow, WalletApiIEvents, WalletApiIBanking, WalletApiIDeposit, WalletApiKotlinx_coroutines_coreSharedFlow, WalletApiKotlinx_serialization_coreKSerializer, WalletApiIPayment, WalletApiIPortfolio, WalletApiKotlinKClassifier, WalletApiKotlinFunction, WalletApiKotlinSuspendFunction1, WalletApiKtor_serializationWebsocketContentConverter, WalletApiIWithdrawal, WalletApiKotlinx_coroutines_coreJob, WalletApiKotlinSuspendFunction0, WalletApiKtor_client_coreHttpClientEngine, WalletApiKotlinx_coroutines_coreFlowCollector, WalletApiKotlinx_serialization_coreEncoder, WalletApiKotlinx_serialization_coreSerialDescriptor, WalletApiKotlinx_serialization_coreSerializationStrategy, WalletApiKotlinx_serialization_coreDecoder, WalletApiKotlinx_serialization_coreDeserializationStrategy, WalletApiKotlinIterator, WalletApiKtor_websocketsWebSocketExtension, WalletApiKotlinx_coroutines_coreReceiveChannel, WalletApiKotlinx_coroutines_coreSendChannel, WalletApiKotlinCoroutineContext, WalletApiKotlinx_coroutines_coreCoroutineScope, WalletApiKtor_websocketsWebSocketSession, WalletApiKtor_client_coreClientWebSocketSession, WalletApiKotlinx_coroutines_coreDeferred, WalletApiKtor_websocketsDefaultWebSocketSession, WalletApiKtor_ioCloseable, WalletApiKtor_client_coreHttpClientEngineCapability, WalletApiKtor_utilsAttributes, WalletApiKotlinx_coroutines_coreDisposableHandle, WalletApiKotlinx_coroutines_coreChildHandle, WalletApiKotlinx_coroutines_coreChildJob, WalletApiKotlinSequence, WalletApiKotlinx_coroutines_coreSelectClause0, WalletApiKotlinCoroutineContextKey, WalletApiKotlinCoroutineContextElement, WalletApiKotlinx_serialization_coreCompositeEncoder, WalletApiKotlinAnnotation, WalletApiKotlinx_serialization_coreCompositeDecoder, WalletApiKtor_ioByteReadChannel, WalletApiKtor_client_coreHttpRequest, WalletApiKtor_websocketsWebSocketExtensionFactory, WalletApiKotlinx_coroutines_coreChannelIterator, WalletApiKotlinx_coroutines_coreSelectClause1, WalletApiKotlinx_coroutines_coreSelectClause2, WalletApiKtor_client_coreHttpClientPlugin, WalletApiKotlinSuspendFunction2, WalletApiKotlinKClass, WalletApiKotlinKType, WalletApiKotlinComparable, WalletApiKotlinx_coroutines_coreParentJob, WalletApiKotlinx_coroutines_coreSelectInstance, WalletApiKtor_httpHeaders, WalletApiKotlinContinuation, WalletApiKotlinContinuationInterceptor, WalletApiKotlinx_coroutines_coreRunnable, WalletApiKotlinx_serialization_coreSerializersModuleCollector, WalletApiKtor_ioReadSession, WalletApiKotlinAppendable, WalletApiKtor_httpHttpMessage, WalletApiKtor_httpHttpMessageBuilder, WalletApiKotlinKDeclarationContainer, WalletApiKotlinKAnnotatedElement, WalletApiKtor_httpParameters, WalletApiKotlinMapEntry, WalletApiKtor_utilsStringValues, WalletApiKtor_ioObjectPool, WalletApiKtor_utilsStringValuesBuilder, WalletApiKtor_httpParametersBuilder;

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
@interface WalletApiBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface WalletApiBase (WalletApiBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface WalletApiMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface WalletApiMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorWalletApiKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface WalletApiNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface WalletApiByte : WalletApiNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface WalletApiUByte : WalletApiNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface WalletApiShort : WalletApiNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface WalletApiUShort : WalletApiNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface WalletApiInt : WalletApiNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface WalletApiUInt : WalletApiNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface WalletApiLong : WalletApiNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface WalletApiULong : WalletApiNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface WalletApiFloat : WalletApiNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface WalletApiDouble : WalletApiNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface WalletApiBoolean : WalletApiNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessKey")))
@interface WalletApiAccessKey : WalletApiBase
- (instancetype)initWithAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken __attribute__((swift_name("init(accessToken:refreshToken:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiAccessKey *)doCopyAccessToken:(NSString *)accessToken refreshToken:(NSString *)refreshToken __attribute__((swift_name("doCopy(accessToken:refreshToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
@end

__attribute__((swift_name("IEvents")))
@protocol WalletApiIEvents
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)eventsWithCompletionHandler:(void (^)(id<WalletApiKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("events(completionHandler:)")));
@end

__attribute__((swift_name("IBanking")))
@protocol WalletApiIBanking <WalletApiIEvents>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkBankAccountJsonBody:(NSString *)jsonBody completionHandler:(void (^)(WalletApiLinkPaymentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkBankAccount(jsonBody:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkNetellerTrusted:(BOOL)trusted name:(NSString *)name email:(NSString *)email completionHandler:(void (^)(WalletApiLinkPaymentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkNeteller(trusted:name:email:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkPspAccountInstrument:(NSString *)instrument code:(NSString * _Nullable)code trusted:(BOOL)trusted name:(NSString * _Nullable)name email:(NSString * _Nullable)email completionHandler:(void (^)(WalletApiLinkPaymentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkPspAccount(instrument:code:trusted:name:email:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkSkrillTrusted:(BOOL)trusted name:(NSString *)name email:(NSString *)email completionHandler:(void (^)(WalletApiLinkPaymentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkSkrill(trusted:name:email:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkTrustlyTrusted:(BOOL)trusted name:(NSString *)name email:(NSString *)email completionHandler:(void (^)(WalletApiLinkPaymentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkTrustly(trusted:name:email:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Banking")))
@interface WalletApiBanking : WalletApiBase <WalletApiIBanking>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)eventsWithCompletionHandler:(void (^)(id<WalletApiKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("events(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkBankAccountJsonBody:(NSString *)jsonBody completionHandler:(void (^)(WalletApiLinkPaymentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkBankAccount(jsonBody:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkNetellerTrusted:(BOOL)trusted name:(NSString *)name email:(NSString *)email completionHandler:(void (^)(WalletApiLinkPaymentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkNeteller(trusted:name:email:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkPspAccountInstrument:(NSString *)instrument code:(NSString * _Nullable)code trusted:(BOOL)trusted name:(NSString * _Nullable)name email:(NSString * _Nullable)email completionHandler:(void (^)(WalletApiLinkPaymentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkPspAccount(instrument:code:trusted:name:email:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkSkrillTrusted:(BOOL)trusted name:(NSString *)name email:(NSString *)email completionHandler:(void (^)(WalletApiLinkPaymentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkSkrill(trusted:name:email:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkTrustlyTrusted:(BOOL)trusted name:(NSString *)name email:(NSString *)email completionHandler:(void (^)(WalletApiLinkPaymentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkTrustly(trusted:name:email:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Clients")))
@interface WalletApiClients : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)clients __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiClients *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ANDROID_CEX __attribute__((swift_name("ANDROID_CEX")));
@property (readonly) NSString *ANDROID_WALLET __attribute__((swift_name("ANDROID_WALLET")));
@property (readonly) NSString *IOS_CEX __attribute__((swift_name("IOS_CEX")));
@property (readonly) NSString *IOS_WALLET __attribute__((swift_name("IOS_WALLET")));
@end

__attribute__((swift_name("IDeposit")))
@protocol WalletApiIDeposit <WalletApiIEvents>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)accountsWithCompletionHandler:(void (^)(NSArray<WalletApiAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("accounts(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmId:(NSString *)id code:(WalletApiConfirmCode * _Nullable)code completionHandler:(void (^)(WalletApiOperationConfirmResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("confirm(id:code:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)operationSource:(WalletApiSource *)source destination:(WalletApiDestination *)destination completionHandler:(void (^)(WalletApiOperationResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("operation(source:destination:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Deposit")))
@interface WalletApiDeposit : WalletApiBase <WalletApiIDeposit>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)accountsWithCompletionHandler:(void (^)(NSArray<WalletApiAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("accounts(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmId:(NSString *)id code:(WalletApiConfirmCode * _Nullable)code completionHandler:(void (^)(WalletApiOperationConfirmResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("confirm(id:code:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)eventsWithCompletionHandler:(void (^)(id<WalletApiKotlinx_coroutines_coreSharedFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("events(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)operationSource:(WalletApiSource *)source destination:(WalletApiDestination *)destination completionHandler:(void (^)(WalletApiOperationResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("operation(source:destination:completionHandler:)")));
- (WalletApiSuspendWrapper<WalletApiOperationResponse *> *)operationWrappedSource:(WalletApiSource *)source destination:(WalletApiDestination *)destination __attribute__((swift_name("operationWrapped(source:destination:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event")))
@interface WalletApiEvent<T> : WalletApiBase
- (instancetype)initWithEvent:(NSString *)event data:(T _Nullable)data __attribute__((swift_name("init(event:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (T _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiEvent<T> *)doCopyEvent:(NSString *)event data:(T _Nullable)data __attribute__((swift_name("doCopy(event:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *event __attribute__((swift_name("event")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventCompanion")))
@interface WalletApiEventCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiEventCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(WalletApiKotlinArray<id<WalletApiKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<WalletApiKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventType")))
@interface WalletApiEventType : WalletApiBase
- (instancetype)initWithEvent:(NSString *)event __attribute__((swift_name("init(event:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiEventTypeCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiEventType *)doCopyEvent:(NSString *)event __attribute__((swift_name("doCopy(event:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *event __attribute__((swift_name("event")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventType.Companion")))
@interface WalletApiEventTypeCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiEventTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Events")))
@interface WalletApiEvents : WalletApiBase
@property (class, readonly, getter=companion) WalletApiEventsCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Events.AuthStatus")))
@interface WalletApiEventsAuthStatus : WalletApiEvents
- (instancetype)initWithStatus:(NSString *)status oid:(NSString *)oid __attribute__((swift_name("init(status:oid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiEventsAuthStatusCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiEventsAuthStatus *)doCopyStatus:(NSString *)status oid:(NSString *)oid __attribute__((swift_name("doCopy(status:oid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *oid __attribute__((swift_name("oid")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Events.AuthStatusCompanion")))
@interface WalletApiEventsAuthStatusCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiEventsAuthStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Events.Companion")))
@interface WalletApiEventsCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiEventsCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(WalletApiKotlinArray<id<WalletApiKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Events.Echo")))
@interface WalletApiEventsEcho : WalletApiEvents
- (instancetype)initWithEcho:(NSString *)echo __attribute__((swift_name("init(echo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiEventsEchoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *echo __attribute__((swift_name("echo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Events.EchoCompanion")))
@interface WalletApiEventsEchoCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiEventsEchoCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Events.Url")))
@interface WalletApiEventsUrl : WalletApiEvents
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiEventsUrlCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Events.UrlCompanion")))
@interface WalletApiEventsUrlCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiEventsUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFields")))
@interface WalletApiFormFields : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)formFields __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiFormFields *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t EMAIL __attribute__((swift_name("EMAIL")));
@property (readonly) int32_t NAME __attribute__((swift_name("NAME")));
@property (readonly) NSArray<WalletApiInt *> *SKRILL __attribute__((swift_name("SKRILL")));
@property (readonly) int32_t TAG __attribute__((swift_name("TAG")));
@property (readonly) int32_t TRUSTED __attribute__((swift_name("TRUSTED")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IBankingCompanion")))
@interface WalletApiIBankingCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiIBankingCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *NETELLER __attribute__((swift_name("NETELLER")));
@property (readonly) NSString *PAYPAL __attribute__((swift_name("PAYPAL")));
@property (readonly) NSString *SKRILL __attribute__((swift_name("SKRILL")));
@property (readonly) NSString *TRUSTLY __attribute__((swift_name("TRUSTLY")));
@property (readonly) NSString *VYNE __attribute__((swift_name("VYNE")));
@end

__attribute__((swift_name("IPayment")))
@protocol WalletApiIPayment
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPaymentRequestAsset:(NSString *)asset completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPaymentRequest(asset:completionHandler:)")));
@end

__attribute__((swift_name("IPortfolio")))
@protocol WalletApiIPortfolio
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)portfolioRateAsset:(NSString *)rateAsset asset:(NSString *)asset days:(int32_t)days completionHandler:(void (^)(NSArray<WalletApiPortfolio *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("portfolio(rateAsset:asset:days:completionHandler:)")));
@end

__attribute__((swift_name("IWithdrawal")))
@protocol WalletApiIWithdrawal <WalletApiIEvents>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmId:(NSString *)id code:(WalletApiConfirmCode * _Nullable)code completionHandler:(void (^)(WalletApiOperationConfirmResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("confirm(id:code:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)operationSource:(WalletApiSource *)source destination:(WalletApiDestination *)destination completionHandler:(void (^)(WalletApiOperationResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("operation(source:destination:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payment")))
@interface WalletApiPayment : WalletApiBase <WalletApiIPayment>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPaymentRequestAsset:(NSString *)asset completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPaymentRequest(asset:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Portfolio_")))
@interface WalletApiPortfolio_ : WalletApiBase <WalletApiIPortfolio>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)portfolioRateAsset:(NSString *)rateAsset asset:(NSString *)asset days:(int32_t)days completionHandler:(void (^)(NSArray<WalletApiPortfolio *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("portfolio(rateAsset:asset:days:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceLocator")))
@interface WalletApiServiceLocator : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serviceLocator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiServiceLocator *shared __attribute__((swift_name("shared")));
- (id _Nullable)lookUpClazz:(id<WalletApiKotlinKClassifier>)clazz __attribute__((swift_name("lookUp(clazz:)")));
@property NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property NSString *client __attribute__((swift_name("client")));
@property WalletApiAccessKey *(^requestToken)(WalletApiInt *) __attribute__((swift_name("requestToken")));
@property (readonly) WalletApiSocketCommunicator *socketCommunicator __attribute__((swift_name("socketCommunicator")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol WalletApiKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol WalletApiKotlinSuspendFunction1 <WalletApiKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketCommunicator")))
@interface WalletApiSocketCommunicator : WalletApiBase <WalletApiKotlinSuspendFunction1>
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiSocketCommunicatorCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authorizeToken:(NSString *)token completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("authorize(token:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)closeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("close(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("connect(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(WalletApiKtor_client_coreDefaultClientWebSocketSession *)session completionHandler:(void (^)(WalletApiKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessage:(NSString *)message completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(message:completionHandler:)")));
@property void (^ _Nullable callback)(NSString *) __attribute__((swift_name("callback")));
@property (readonly) WalletApiKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreSharedFlow> events __attribute__((swift_name("events")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketCommunicator.Companion")))
@interface WalletApiSocketCommunicatorCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiSocketCommunicatorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *echo __attribute__((swift_name("echo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketFactory")))
@interface WalletApiSocketFactory : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)socketFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiSocketFactory *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createType:(NSString *)type converter:(id<WalletApiKtor_serializationWebsocketContentConverter>)converter response:(WalletApiKtor_websocketsFrame *)response completionHandler:(void (^)(WalletApiEvents * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("create(type:converter:response:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wallet")))
@interface WalletApiWallet : WalletApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) WalletApiWalletEnv *companion __attribute__((swift_name("companion")));
- (void)authorizationFn:(WalletApiAccessKey *(^)(WalletApiInt *))fn __attribute__((swift_name("authorization(fn:)")));
- (id<WalletApiIBanking>)banking __attribute__((swift_name("banking()")));
- (id<WalletApiIDeposit>)deposit __attribute__((swift_name("deposit()")));
- (id<WalletApiIPayment>)payment __attribute__((swift_name("payment()")));
- (id<WalletApiIPortfolio>)portfolio __attribute__((swift_name("portfolio()")));
- (id<WalletApiIWithdrawal>)withdrawal __attribute__((swift_name("withdrawal()")));
@property NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property NSString * _Nullable client __attribute__((swift_name("client")));
@property BOOL debug __attribute__((swift_name("debug")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wallet.Env")))
@interface WalletApiWalletEnv : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)env __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiWalletEnv *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *DEV __attribute__((swift_name("DEV")));
@property (readonly) NSString *PROD __attribute__((swift_name("PROD")));
@property (readonly) NSString *UAT __attribute__((swift_name("UAT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Withdrawal")))
@interface WalletApiWithdrawal : WalletApiBase <WalletApiIWithdrawal>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmId:(NSString *)id code:(WalletApiConfirmCode * _Nullable)code completionHandler:(void (^)(WalletApiOperationConfirmResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("confirm(id:code:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)eventsWithCompletionHandler:(void (^)(id<WalletApiKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("events(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)operationSource:(WalletApiSource *)source destination:(WalletApiDestination *)destination completionHandler:(void (^)(WalletApiOperationResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("operation(source:destination:completionHandler:)")));
@end

__attribute__((swift_name("WalletAnalytic")))
@interface WalletApiWalletAnalytic : WalletApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)eventName:(NSString *)name attrs:(NSDictionary<NSString *, NSString *> *)attrs __attribute__((swift_name("event(name:attrs:)")));
- (void)logDepositStartCurrency:(NSString *)currency __attribute__((swift_name("logDepositStart(currency:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Account")))
@interface WalletApiAccount : WalletApiBase
- (instancetype)initWithId:(NSString *)id assets:(NSArray<NSString *> * _Nullable)assets type:(NSString *)type status:(NSString * _Nullable)status info:(WalletApiAccountInfo * _Nullable)info instrument:(NSString * _Nullable)instrument trusted:(WalletApiBoolean * _Nullable)trusted isVirtual:(WalletApiBoolean * _Nullable)isVirtual blockchainType:(NSString * _Nullable)blockchainType name:(NSString * _Nullable)name __attribute__((swift_name("init(id:assets:type:status:info:instrument:trusted:isVirtual:blockchainType:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiAccountCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiAccountInfo * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiBoolean * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiAccount *)doCopyId:(NSString *)id assets:(NSArray<NSString *> * _Nullable)assets type:(NSString *)type status:(NSString * _Nullable)status info:(WalletApiAccountInfo * _Nullable)info instrument:(NSString * _Nullable)instrument trusted:(WalletApiBoolean * _Nullable)trusted isVirtual:(WalletApiBoolean * _Nullable)isVirtual blockchainType:(NSString * _Nullable)blockchainType name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:assets:type:status:info:instrument:trusted:isVirtual:blockchainType:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isCard __attribute__((swift_name("isCard()")));
- (BOOL)isGooglePay __attribute__((swift_name("isGooglePay()")));
- (BOOL)isPayPal __attribute__((swift_name("isPayPal()")));
- (BOOL)isTrustly __attribute__((swift_name("isTrustly()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *asset __attribute__((swift_name("asset")));
@property (readonly) NSArray<NSString *> * _Nullable assets __attribute__((swift_name("assets")));
@property NSString *balance __attribute__((swift_name("balance")));
@property NSString * _Nullable blockchainType __attribute__((swift_name("blockchainType")));
@property NSArray<NSString *> *deposit __attribute__((swift_name("deposit")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) WalletApiAccountInfo * _Nullable info __attribute__((swift_name("info")));
@property (readonly) NSString * _Nullable instrument __attribute__((swift_name("instrument")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) WalletApiBoolean * _Nullable trusted __attribute__((swift_name("trusted")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly, getter=virtual) BOOL virtual_ __attribute__((swift_name("virtual_")));
@property NSArray<NSString *> *withdrawal __attribute__((swift_name("withdrawal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Account.Companion")))
@interface WalletApiAccountCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiAccountCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountInfo")))
@interface WalletApiAccountInfo : WalletApiBase
- (instancetype)initWithBalance:(NSString * _Nullable)balance name:(NSString * _Nullable)name expires:(NSString * _Nullable)expires brand:(NSString * _Nullable)brand lastDigits:(NSString * _Nullable)lastDigits address:(NSString * _Nullable)address memo:(NSString * _Nullable)memo blockchain:(NSString * _Nullable)blockchain operationTypes:(NSArray<NSString *> * _Nullable)operationTypes icon:(NSString * _Nullable)icon last4:(NSString * _Nullable)last4 outputMethods:(WalletApiOutputMethodsResponse * _Nullable)outputMethods inputMethods:(WalletApiInputMethodsResponse * _Nullable)inputMethods accountNumber:(NSString * _Nullable)accountNumber type:(NSString * _Nullable)type __attribute__((swift_name("init(balance:name:expires:brand:lastDigits:address:memo:blockchain:operationTypes:icon:last4:outputMethods:inputMethods:accountNumber:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiAccountInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiOutputMethodsResponse * _Nullable)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiInputMethodsResponse * _Nullable)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiAccountInfo *)doCopyBalance:(NSString * _Nullable)balance name:(NSString * _Nullable)name expires:(NSString * _Nullable)expires brand:(NSString * _Nullable)brand lastDigits:(NSString * _Nullable)lastDigits address:(NSString * _Nullable)address memo:(NSString * _Nullable)memo blockchain:(NSString * _Nullable)blockchain operationTypes:(NSArray<NSString *> * _Nullable)operationTypes icon:(NSString * _Nullable)icon last4:(NSString * _Nullable)last4 outputMethods:(WalletApiOutputMethodsResponse * _Nullable)outputMethods inputMethods:(WalletApiInputMethodsResponse * _Nullable)inputMethods accountNumber:(NSString * _Nullable)accountNumber type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(balance:name:expires:brand:lastDigits:address:memo:blockchain:operationTypes:icon:last4:outputMethods:inputMethods:accountNumber:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accountNumber __attribute__((swift_name("accountNumber")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property NSString * _Nullable balance __attribute__((swift_name("balance")));
@property (readonly) NSString * _Nullable blockchain __attribute__((swift_name("blockchain")));
@property (readonly) NSString * _Nullable brand __attribute__((swift_name("brand")));
@property (readonly) NSString * _Nullable expires __attribute__((swift_name("expires")));
@property (readonly) NSString * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) WalletApiInputMethodsResponse * _Nullable inputMethods __attribute__((swift_name("inputMethods")));
@property (readonly) NSString * _Nullable last4 __attribute__((swift_name("last4")));
@property (readonly) NSString * _Nullable lastDigits __attribute__((swift_name("lastDigits")));
@property (readonly) NSString * _Nullable memo __attribute__((swift_name("memo")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property NSArray<NSString *> * _Nullable operationTypes __attribute__((swift_name("operationTypes")));
@property (readonly) WalletApiOutputMethodsResponse * _Nullable outputMethods __attribute__((swift_name("outputMethods")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountInfo.Companion")))
@interface WalletApiAccountInfoCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiAccountInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Provider")))
@interface WalletApiProvider : WalletApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) WalletApiKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountsProvider")))
@interface WalletApiAccountsProvider : WalletApiProvider
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (WalletApiSuspendWrapper<NSArray<WalletApiAccount *> *> *)accountsWrapped __attribute__((swift_name("accountsWrapped()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)fetchWithCompletionHandler:(void (^)(NSArray<WalletApiAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetch(completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Browser")))
@interface WalletApiBrowser : WalletApiBase
- (instancetype)initWithJsEnabled:(BOOL)jsEnabled userAgent:(NSString *)userAgent acceptHeader:(NSString *)acceptHeader __attribute__((swift_name("init(jsEnabled:userAgent:acceptHeader:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiBrowserCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *acceptHeader __attribute__((swift_name("acceptHeader")));
@property (readonly) BOOL jsEnabled __attribute__((swift_name("jsEnabled")));
@property (readonly) NSString *userAgent __attribute__((swift_name("userAgent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Browser.Companion")))
@interface WalletApiBrowserCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiBrowserCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVV")))
@interface WalletApiCVV : WalletApiBase
- (instancetype)initWithCvv:(NSString * _Nullable)cvv token:(NSString * _Nullable)token device:(WalletApiDevice *)device time:(WalletApiTime *)time browser:(WalletApiBrowser *)browser redirect:(WalletApiRedirect *)redirect __attribute__((swift_name("init(cvv:token:device:time:browser:redirect:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiCVVCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) WalletApiBrowser *browser __attribute__((swift_name("browser")));
@property (readonly) NSString * _Nullable cvv __attribute__((swift_name("cvv")));
@property (readonly) WalletApiDevice *device __attribute__((swift_name("device")));
@property (readonly) WalletApiRedirect *redirect __attribute__((swift_name("redirect")));
@property (readonly) WalletApiTime *time __attribute__((swift_name("time")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CVV.Companion")))
@interface WalletApiCVVCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiCVVCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfirmCode")))
@interface WalletApiConfirmCode : WalletApiBase
- (instancetype)initWithId:(NSString * _Nullable)id code:(NSString *)code method:(NSString *)method action:(NSString * _Nullable)action __attribute__((swift_name("init(id:code:method:action:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiConfirmCodeCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiConfirmCode *)doCopyId:(NSString * _Nullable)id code:(NSString *)code method:(NSString *)method action:(NSString * _Nullable)action __attribute__((swift_name("doCopy(id:code:method:action:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable action __attribute__((swift_name("action")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *method __attribute__((swift_name("method")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfirmCode.Companion")))
@interface WalletApiConfirmCodeCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiConfirmCodeCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DepositRequest")))
@interface WalletApiDepositRequest : WalletApiBase
- (instancetype)initWithId:(NSString *)id params:(WalletApiCVV *)params __attribute__((swift_name("init(id:params:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiDepositRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) WalletApiCVV *params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DepositRequest.Companion")))
@interface WalletApiDepositRequestCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiDepositRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Destination")))
@interface WalletApiDestination : WalletApiBase
- (instancetype)initWithAccount:(NSString *)account asset:(NSString *)asset amount:(NSString * _Nullable)amount __attribute__((swift_name("init(account:asset:amount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiDestinationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *account __attribute__((swift_name("account")));
@property (readonly) NSString * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString *asset __attribute__((swift_name("asset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Destination.Companion")))
@interface WalletApiDestinationCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiDestinationCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device")))
@interface WalletApiDevice : WalletApiBase
- (instancetype)initWithType:(NSString *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiDeviceCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Device.Companion")))
@interface WalletApiDeviceCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiDeviceCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fee")))
@interface WalletApiFee : WalletApiBase
- (instancetype)initWithAmount:(NSString *)amount asset:(NSString *)asset type:(NSString *)type __attribute__((swift_name("init(amount:asset:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiFeeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *asset __attribute__((swift_name("asset")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fee.Companion")))
@interface WalletApiFeeCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiFeeCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowWrapper")))
@interface WalletApiFlowWrapper<T> : WalletApiBase
- (instancetype)initWithFlow:(id<WalletApiKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (id<WalletApiKotlinx_coroutines_coreJob>)subscribeOnEach:(void (^)(T))onEach onComplete:(void (^)(void))onComplete onThrow:(void (^)(WalletApiKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(onEach:onComplete:onThrow:)")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreFlow> flow __attribute__((swift_name("flow")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputMethodsResponse")))
@interface WalletApiInputMethodsResponse : WalletApiBase
- (instancetype)initWithExchange:(NSArray<NSString *> * _Nullable)exchange buy:(NSArray<NSString *> * _Nullable)buy deposit:(NSArray<NSString *> * _Nullable)deposit __attribute__((swift_name("init(exchange:buy:deposit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiInputMethodsResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiInputMethodsResponse *)doCopyExchange:(NSArray<NSString *> * _Nullable)exchange buy:(NSArray<NSString *> * _Nullable)buy deposit:(NSArray<NSString *> * _Nullable)deposit __attribute__((swift_name("doCopy(exchange:buy:deposit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable buy __attribute__((swift_name("buy")));
@property NSArray<NSString *> * _Nullable deposit __attribute__((swift_name("deposit")));
@property (readonly) NSArray<NSString *> * _Nullable exchange __attribute__((swift_name("exchange")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputMethodsResponse.Companion")))
@interface WalletApiInputMethodsResponseCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiInputMethodsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkBankPaymentMethodRequest")))
@interface WalletApiLinkBankPaymentMethodRequest : WalletApiBase
- (instancetype)initWithAssets:(NSArray<id> *)assets info:(NSDictionary<NSString *, id> *)info trusted:(BOOL)trusted confirmCode:(WalletApiConfirmCode * _Nullable)confirmCode __attribute__((swift_name("init(assets:info:trusted:confirmCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiLinkBankPaymentMethodRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<id> *assets __attribute__((swift_name("assets")));
@property (readonly) WalletApiConfirmCode * _Nullable confirmCode __attribute__((swift_name("confirmCode")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) BOOL trusted __attribute__((swift_name("trusted")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkBankPaymentMethodRequest.Companion")))
@interface WalletApiLinkBankPaymentMethodRequestCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiLinkBankPaymentMethodRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkPaymentMethodRequest")))
@interface WalletApiLinkPaymentMethodRequest : WalletApiBase
- (instancetype)initWithAssets:(NSArray<NSString *> *)assets trusted:(BOOL)trusted code:(NSString * _Nullable)code name:(NSString * _Nullable)name email:(NSString * _Nullable)email __attribute__((swift_name("init(assets:trusted:code:name:email:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiLinkPaymentMethodRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiLinkPaymentMethodRequest *)doCopyAssets:(NSArray<NSString *> *)assets trusted:(BOOL)trusted code:(NSString * _Nullable)code name:(NSString * _Nullable)name email:(NSString * _Nullable)email __attribute__((swift_name("doCopy(assets:trusted:code:name:email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *assets __attribute__((swift_name("assets")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) BOOL trusted __attribute__((swift_name("trusted")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkPaymentMethodRequest.Companion")))
@interface WalletApiLinkPaymentMethodRequestCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiLinkPaymentMethodRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkPaymentResponse")))
@interface WalletApiLinkPaymentResponse : WalletApiBase
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiLinkPaymentResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiLinkPaymentResponse *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkPaymentResponse.Companion")))
@interface WalletApiLinkPaymentResponseCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiLinkPaymentResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationConfirmProvider")))
@interface WalletApiOperationConfirmProvider : WalletApiProvider
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmId:(NSString *)id code:(WalletApiConfirmCode * _Nullable)code completionHandler:(void (^)(WalletApiOperationConfirmResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("confirm(id:code:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationConfirmRequest")))
@interface WalletApiOperationConfirmRequest : WalletApiBase
- (instancetype)initWithId:(NSString *)id confirmCode:(WalletApiConfirmCode * _Nullable)confirmCode params:(WalletApiParams * _Nullable)params __attribute__((swift_name("init(id:confirmCode:params:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiOperationConfirmRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) WalletApiConfirmCode * _Nullable confirmCode __attribute__((swift_name("confirmCode")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) WalletApiParams * _Nullable params __attribute__((swift_name("params")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationConfirmRequest.Companion")))
@interface WalletApiOperationConfirmRequestCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiOperationConfirmRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationConfirmResponse")))
@interface WalletApiOperationConfirmResponse : WalletApiBase
- (instancetype)initWithId:(NSString *)id status:(NSString *)status createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt fees:(NSArray<WalletApiFee *> * _Nullable)fees source:(WalletApiSource *)source destination:(WalletApiDestination *)destination code:(NSString *)code __attribute__((swift_name("init(id:status:createdAt:updatedAt:fees:source:destination:code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiOperationConfirmResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) WalletApiDestination *destination __attribute__((swift_name("destination")));
@property (readonly) NSArray<WalletApiFee *> * _Nullable fees __attribute__((swift_name("fees")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) WalletApiSource *source __attribute__((swift_name("source")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *updatedAt __attribute__((swift_name("updatedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationConfirmResponse.Companion")))
@interface WalletApiOperationConfirmResponseCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiOperationConfirmResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationProvider")))
@interface WalletApiOperationProvider : WalletApiProvider
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)operationOperationRequest:(WalletApiOperationRequest *)operationRequest completionHandler:(void (^)(WalletApiOperationResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("operation(operationRequest:completionHandler:)")));
- (WalletApiSuspendWrapper<WalletApiOperationResponse *> *)operationWrappedOperationRequest:(WalletApiOperationRequest *)operationRequest __attribute__((swift_name("operationWrapped(operationRequest:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationRequest")))
@interface WalletApiOperationRequest : WalletApiBase
- (instancetype)initWithSource:(WalletApiSource *)source destination:(WalletApiDestination *)destination __attribute__((swift_name("init(source:destination:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiOperationRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) WalletApiDestination *destination __attribute__((swift_name("destination")));
@property (readonly) WalletApiSource *source __attribute__((swift_name("source")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationRequest.Companion")))
@interface WalletApiOperationRequestCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiOperationRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationResponse")))
@interface WalletApiOperationResponse : WalletApiBase
- (instancetype)initWithId:(NSString *)id requiredParams:(NSArray<NSString *> * _Nullable)requiredParams expirationIn:(int64_t)expirationIn source:(WalletApiRequestOperationResult *)source destination:(WalletApiRequestOperationResult *)destination fees:(NSArray<WalletApiFee *> * _Nullable)fees __attribute__((swift_name("init(id:requiredParams:expirationIn:source:destination:fees:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiOperationResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) WalletApiRequestOperationResult *destination __attribute__((swift_name("destination")));
@property (readonly) int64_t expirationIn __attribute__((swift_name("expirationIn")));
@property (readonly) NSArray<WalletApiFee *> * _Nullable fees __attribute__((swift_name("fees")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> * _Nullable requiredParams __attribute__((swift_name("requiredParams")));
@property (readonly) WalletApiRequestOperationResult *source __attribute__((swift_name("source")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationResponse.Companion")))
@interface WalletApiOperationResponseCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiOperationResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputMethodsResponse")))
@interface WalletApiOutputMethodsResponse : WalletApiBase
- (instancetype)initWithExchange:(NSArray<NSString *> * _Nullable)exchange sell:(NSArray<NSString *> * _Nullable)sell withdrawal:(NSArray<NSString *> * _Nullable)withdrawal __attribute__((swift_name("init(exchange:sell:withdrawal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiOutputMethodsResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiOutputMethodsResponse *)doCopyExchange:(NSArray<NSString *> * _Nullable)exchange sell:(NSArray<NSString *> * _Nullable)sell withdrawal:(NSArray<NSString *> * _Nullable)withdrawal __attribute__((swift_name("doCopy(exchange:sell:withdrawal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable exchange __attribute__((swift_name("exchange")));
@property (readonly) NSArray<NSString *> * _Nullable sell __attribute__((swift_name("sell")));
@property NSArray<NSString *> * _Nullable withdrawal __attribute__((swift_name("withdrawal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutputMethodsResponse.Companion")))
@interface WalletApiOutputMethodsResponseCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiOutputMethodsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Params")))
@interface WalletApiParams : WalletApiBase
- (instancetype)initWithDevice:(WalletApiDevice *)device browser:(WalletApiBrowser *)browser time:(WalletApiTime *)time __attribute__((swift_name("init(device:browser:time:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiParamsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) WalletApiBrowser *browser __attribute__((swift_name("browser")));
@property (readonly) WalletApiDevice *device __attribute__((swift_name("device")));
@property (readonly) WalletApiTime *time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Params.Companion")))
@interface WalletApiParamsCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Portfolio")))
@interface WalletApiPortfolio : WalletApiBase
- (instancetype)initWithDate:(NSString *)date stringValue:(NSString *)stringValue __attribute__((swift_name("init(date:stringValue:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiPortfolioCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiPortfolio *)doCopyDate:(NSString *)date stringValue:(NSString *)stringValue __attribute__((swift_name("doCopy(date:stringValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *date __attribute__((swift_name("date")));
@property (readonly) NSString *stringValue __attribute__((swift_name("stringValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Portfolio.Companion")))
@interface WalletApiPortfolioCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiPortfolioCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PortfolioProvider")))
@interface WalletApiPortfolioProvider : WalletApiProvider
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchRateAsset:(NSString *)rateAsset asset:(NSString *)asset days:(int32_t)days completionHandler:(void (^)(NSArray<WalletApiPortfolio *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetch(rateAsset:asset:days:completionHandler:)")));
- (WalletApiSuspendWrapper<NSArray<WalletApiPortfolio *> *> *)fetchWrappedRateAsset:(NSString *)rateAsset asset:(NSString *)asset days:(int32_t)days __attribute__((swift_name("fetchWrapped(rateAsset:asset:days:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Redirect")))
@interface WalletApiRedirect : WalletApiBase
- (instancetype)initWithSuccess:(NSString *)success decline:(NSString *)decline __attribute__((swift_name("init(success:decline:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiRedirectCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *decline __attribute__((swift_name("decline")));
@property (readonly) NSString *success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Redirect.Companion")))
@interface WalletApiRedirectCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiRedirectCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestOperationResult")))
@interface WalletApiRequestOperationResult : WalletApiBase
- (instancetype)initWithAmount:(NSString *)amount asset:(NSString *)asset __attribute__((swift_name("init(amount:asset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiRequestOperationResultCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *asset __attribute__((swift_name("asset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestOperationResult.Companion")))
@interface WalletApiRequestOperationResultCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiRequestOperationResultCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Source")))
@interface WalletApiSource : WalletApiBase
- (instancetype)initWithAccount:(NSString *)account asset:(NSString *)asset amount:(NSString * _Nullable)amount __attribute__((swift_name("init(account:asset:amount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiSourceCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *account __attribute__((swift_name("account")));
@property (readonly) NSString * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString *asset __attribute__((swift_name("asset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Source.Companion")))
@interface WalletApiSourceCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiSourceCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuspendWrapper")))
@interface WalletApiSuspendWrapper<T> : WalletApiBase
- (instancetype)initWithSuspender:(id<WalletApiKotlinSuspendFunction0>)suspender __attribute__((swift_name("init(suspender:)"))) __attribute__((objc_designated_initializer));
- (id<WalletApiKotlinx_coroutines_coreJob>)subscribeOnSuccess:(void (^)(T))onSuccess onThrow:(void (^)(WalletApiKotlinThrowable *))onThrow onComplete:(void (^)(void))onComplete __attribute__((swift_name("subscribe(onSuccess:onThrow:onComplete:)")));
@property (readonly) id<WalletApiKotlinSuspendFunction0> suspender __attribute__((swift_name("suspender")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Time")))
@interface WalletApiTime : WalletApiBase
- (instancetype)initWithOffset:(NSString *)offset __attribute__((swift_name("init(offset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiTimeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *offset __attribute__((swift_name("offset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Time.Companion")))
@interface WalletApiTimeCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientFactoryKt")))
@interface WalletApiHttpClientFactoryKt : WalletApiBase
@property (class, readonly) id<WalletApiKtor_client_coreHttpClientEngine> clientEngine __attribute__((swift_name("clientEngine")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WalletKt")))
@interface WalletApiWalletKt : WalletApiBase
+ (WalletApiWallet *)WalletFn:(void (^)(WalletApiWallet *))fn __attribute__((swift_name("Wallet(fn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerKt")))
@interface WalletApiLoggerKt : WalletApiBase
+ (void)logDebugMessage:(NSString *)message throwable:(WalletApiKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("logDebug(message:throwable:tag:)")));
+ (void)logErrorMessage:(NSString *)message throwable:(WalletApiKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("logError(message:throwable:tag:)")));
+ (void)toDebugLog:(id)receiver __attribute__((swift_name("toDebugLog(_:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface WalletApiKotlinThrowable : WalletApiBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (WalletApiKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WalletApiKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface WalletApiKotlinException : WalletApiKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface WalletApiKotlinRuntimeException : WalletApiKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface WalletApiKotlinIllegalStateException : WalletApiKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface WalletApiKotlinCancellationException : WalletApiKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol WalletApiKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<WalletApiKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol WalletApiKotlinx_coroutines_coreSharedFlow <WalletApiKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol WalletApiKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<WalletApiKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<WalletApiKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol WalletApiKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<WalletApiKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<WalletApiKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol WalletApiKotlinx_serialization_coreKSerializer <WalletApiKotlinx_serialization_coreSerializationStrategy, WalletApiKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface WalletApiKotlinArray<T> : WalletApiBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(WalletApiInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<WalletApiKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol WalletApiKotlinKClassifier
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol WalletApiKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<WalletApiKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_websocketsWebSocketSession")))
@protocol WalletApiKtor_websocketsWebSocketSession <WalletApiKotlinx_coroutines_coreCoroutineScope>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("flush(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendFrame:(WalletApiKtor_websocketsFrame *)frame completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(frame:completionHandler:)")));
- (void)terminate __attribute__((swift_name("terminate()"))) __attribute__((deprecated("Use cancel() instead.")));
@property (readonly) NSArray<id<WalletApiKtor_websocketsWebSocketExtension>> *extensions __attribute__((swift_name("extensions")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreReceiveChannel> incoming __attribute__((swift_name("incoming")));
@property BOOL masking __attribute__((swift_name("masking")));
@property int64_t maxFrameSize __attribute__((swift_name("maxFrameSize")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreSendChannel> outgoing __attribute__((swift_name("outgoing")));
@end

__attribute__((swift_name("Ktor_client_coreClientWebSocketSession")))
@protocol WalletApiKtor_client_coreClientWebSocketSession <WalletApiKtor_websocketsWebSocketSession>
@required
@property (readonly) WalletApiKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@end

__attribute__((swift_name("Ktor_websocketsDefaultWebSocketSession")))
@protocol WalletApiKtor_websocketsDefaultWebSocketSession <WalletApiKtor_websocketsWebSocketSession>
@required
- (void)startNegotiatedExtensions:(NSArray<id<WalletApiKtor_websocketsWebSocketExtension>> *)negotiatedExtensions __attribute__((swift_name("start(negotiatedExtensions:)")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreDeferred> closeReason __attribute__((swift_name("closeReason")));
@property int64_t pingIntervalMillis __attribute__((swift_name("pingIntervalMillis")));
@property int64_t timeoutMillis __attribute__((swift_name("timeoutMillis")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreDefaultClientWebSocketSession")))
@interface WalletApiKtor_client_coreDefaultClientWebSocketSession : WalletApiBase <WalletApiKtor_client_coreClientWebSocketSession, WalletApiKtor_websocketsDefaultWebSocketSession>
- (instancetype)initWithCall:(WalletApiKtor_client_coreHttpClientCall *)call delegate:(id<WalletApiKtor_websocketsDefaultWebSocketSession>)delegate __attribute__((swift_name("init(call:delegate:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("flush(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendFrame:(WalletApiKtor_websocketsFrame *)frame completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(frame:completionHandler:)")));
- (void)startNegotiatedExtensions:(NSArray<id<WalletApiKtor_websocketsWebSocketExtension>> *)negotiatedExtensions __attribute__((swift_name("start(negotiatedExtensions:)")));
- (void)terminate __attribute__((swift_name("terminate()"))) __attribute__((deprecated("Use cancel() instead.")));
@property (readonly) WalletApiKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreDeferred> closeReason __attribute__((swift_name("closeReason")));
@property (readonly) id<WalletApiKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) NSArray<id<WalletApiKtor_websocketsWebSocketExtension>> *extensions __attribute__((swift_name("extensions")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreReceiveChannel> incoming __attribute__((swift_name("incoming")));
@property BOOL masking __attribute__((swift_name("masking")));
@property int64_t maxFrameSize __attribute__((swift_name("maxFrameSize")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreSendChannel> outgoing __attribute__((swift_name("outgoing")));
@property int64_t pingIntervalMillis __attribute__((swift_name("pingIntervalMillis")));
@property int64_t timeoutMillis __attribute__((swift_name("timeoutMillis")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface WalletApiKotlinUnit : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol WalletApiKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface WalletApiKtor_client_coreHttpClient : WalletApiBase <WalletApiKotlinx_coroutines_coreCoroutineScope, WalletApiKtor_ioCloseable>
- (instancetype)initWithEngine:(id<WalletApiKtor_client_coreHttpClientEngine>)engine userConfig:(WalletApiKtor_client_coreHttpClientConfig<WalletApiKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (WalletApiKtor_client_coreHttpClient *)configBlock:(void (^)(WalletApiKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<WalletApiKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<WalletApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<WalletApiKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<WalletApiKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) WalletApiKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) WalletApiKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) WalletApiKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) WalletApiKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) WalletApiKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) WalletApiKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Ktor_serializationWebsocketContentConverter")))
@protocol WalletApiKtor_serializationWebsocketContentConverter
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deserializeCharset:(WalletApiKtor_ioCharset *)charset typeInfo:(WalletApiKtor_utilsTypeInfo *)typeInfo content:(WalletApiKtor_websocketsFrame *)content completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("deserialize(charset:typeInfo:content:completionHandler:)")));
- (BOOL)isApplicableFrame:(WalletApiKtor_websocketsFrame *)frame __attribute__((swift_name("isApplicable(frame:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)serializeCharset:(WalletApiKtor_ioCharset *)charset typeInfo:(WalletApiKtor_utilsTypeInfo *)typeInfo value:(id)value completionHandler:(void (^)(WalletApiKtor_websocketsFrame * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("serialize(charset:typeInfo:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)serializeNullableCharset:(WalletApiKtor_ioCharset *)charset typeInfo:(WalletApiKtor_utilsTypeInfo *)typeInfo value:(id _Nullable)value completionHandler:(void (^)(WalletApiKtor_websocketsFrame * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("serializeNullable(charset:typeInfo:value:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_websocketsFrame")))
@interface WalletApiKtor_websocketsFrame : WalletApiBase
@property (class, readonly, getter=companion) WalletApiKtor_websocketsFrameCompanion *companion __attribute__((swift_name("companion")));
- (WalletApiKtor_websocketsFrame *)doCopy __attribute__((swift_name("doCopy()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WalletApiKotlinByteArray *data __attribute__((swift_name("data")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreDisposableHandle> disposableHandle __attribute__((swift_name("disposableHandle")));
@property (readonly) BOOL fin __attribute__((swift_name("fin")));
@property (readonly) WalletApiKtor_websocketsFrameType *frameType __attribute__((swift_name("frameType")));
@property (readonly) BOOL rsv1 __attribute__((swift_name("rsv1")));
@property (readonly) BOOL rsv2 __attribute__((swift_name("rsv2")));
@property (readonly) BOOL rsv3 __attribute__((swift_name("rsv3")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol WalletApiKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<WalletApiKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<WalletApiKotlinCoroutineContextElement> _Nullable)getKey:(id<WalletApiKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<WalletApiKotlinCoroutineContext>)minusKeyKey:(id<WalletApiKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<WalletApiKotlinCoroutineContext>)plusContext:(id<WalletApiKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol WalletApiKotlinCoroutineContextElement <WalletApiKotlinCoroutineContext>
@required
@property (readonly) id<WalletApiKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol WalletApiKotlinx_coroutines_coreJob <WalletApiKotlinCoroutineContextElement>
@required
- (id<WalletApiKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<WalletApiKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(WalletApiKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (WalletApiKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<WalletApiKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(WalletApiKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<WalletApiKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(WalletApiKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<WalletApiKotlinx_coroutines_coreJob>)plusOther:(id<WalletApiKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<WalletApiKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol WalletApiKotlinSuspendFunction0 <WalletApiKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol WalletApiKtor_client_coreHttpClientEngine <WalletApiKotlinx_coroutines_coreCoroutineScope, WalletApiKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(WalletApiKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(WalletApiKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(WalletApiKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) WalletApiKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) WalletApiKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<WalletApiKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol WalletApiKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol WalletApiKotlinx_serialization_coreEncoder
@required
- (id<WalletApiKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<WalletApiKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<WalletApiKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<WalletApiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<WalletApiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) WalletApiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol WalletApiKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<WalletApiKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<WalletApiKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<WalletApiKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) WalletApiKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol WalletApiKotlinx_serialization_coreDecoder
@required
- (id<WalletApiKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<WalletApiKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (WalletApiKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<WalletApiKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<WalletApiKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) WalletApiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol WalletApiKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface WalletApiKtor_client_coreHttpClientCall : WalletApiBase <WalletApiKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(WalletApiKtor_client_coreHttpClient *)client requestData:(WalletApiKtor_client_coreHttpRequestData *)requestData responseData:(WalletApiKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(WalletApiKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(WalletApiKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(WalletApiKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<WalletApiKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<WalletApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) WalletApiKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<WalletApiKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<WalletApiKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property WalletApiKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_websocketsWebSocketExtension")))
@protocol WalletApiKtor_websocketsWebSocketExtension
@required
- (BOOL)clientNegotiationNegotiatedProtocols:(NSArray<WalletApiKtor_websocketsWebSocketExtensionHeader *> *)negotiatedProtocols __attribute__((swift_name("clientNegotiation(negotiatedProtocols:)")));
- (WalletApiKtor_websocketsFrame *)processIncomingFrameFrame:(WalletApiKtor_websocketsFrame *)frame __attribute__((swift_name("processIncomingFrame(frame:)")));
- (WalletApiKtor_websocketsFrame *)processOutgoingFrameFrame:(WalletApiKtor_websocketsFrame *)frame __attribute__((swift_name("processOutgoingFrame(frame:)")));
- (NSArray<WalletApiKtor_websocketsWebSocketExtensionHeader *> *)serverNegotiationRequestedProtocols:(NSArray<WalletApiKtor_websocketsWebSocketExtensionHeader *> *)requestedProtocols __attribute__((swift_name("serverNegotiation(requestedProtocols:)")));
@property (readonly) id<WalletApiKtor_websocketsWebSocketExtensionFactory> factory __attribute__((swift_name("factory")));
@property (readonly) NSArray<WalletApiKtor_websocketsWebSocketExtensionHeader *> *protocols __attribute__((swift_name("protocols")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreReceiveChannel")))
@protocol WalletApiKotlinx_coroutines_coreReceiveChannel
@required
- (void)cancelCause:(WalletApiKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<WalletApiKotlinx_coroutines_coreChannelIterator>)iterator __attribute__((swift_name("iterator()")));
- (id _Nullable)poll __attribute__((swift_name("poll()"))) __attribute__((unavailable("Deprecated in the favour of 'tryReceive'. Please note that the provided replacement does not rethrow channel's close cause as 'poll' did, for the precise replacement please refer to the 'poll' documentation")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveCatchingWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveCatching(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveOrNullWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(completionHandler:)"))) __attribute__((unavailable("Deprecated in favor of 'receiveCatching'. Please note that the provided replacement does not rethrow channel's close cause as 'receiveOrNull' did, for the detailed replacement please refer to the 'receiveOrNull' documentation")));
- (id _Nullable)tryReceive __attribute__((swift_name("tryReceive()")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) BOOL isClosedForReceive __attribute__((swift_name("isClosedForReceive")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreSelectClause1> onReceive __attribute__((swift_name("onReceive")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreSelectClause1> onReceiveCatching __attribute__((swift_name("onReceiveCatching")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreSelectClause1> onReceiveOrNull __attribute__((swift_name("onReceiveOrNull"))) __attribute__((unavailable("Deprecated in favor of onReceiveCatching extension")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSendChannel")))
@protocol WalletApiKotlinx_coroutines_coreSendChannel
@required
- (BOOL)closeCause:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)invokeOnCloseHandler:(void (^)(WalletApiKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(id _Nullable)element __attribute__((swift_name("offer(element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySend' method")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(id _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(id _Nullable)element __attribute__((swift_name("trySend(element:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreSelectClause2> onSend __attribute__((swift_name("onSend")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDeferred")))
@protocol WalletApiKotlinx_coroutines_coreDeferred <WalletApiKotlinx_coroutines_coreJob>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (WalletApiKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface WalletApiKtor_client_coreHttpClientEngineConfig : WalletApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property WalletApiKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface WalletApiKtor_client_coreHttpClientConfig<T> : WalletApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (WalletApiKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(WalletApiKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<WalletApiKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(WalletApiKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(WalletApiKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol WalletApiKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol WalletApiKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(WalletApiKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(WalletApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(WalletApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(WalletApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(WalletApiKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(WalletApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(WalletApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(WalletApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<WalletApiKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface WalletApiKtor_eventsEvents : WalletApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(WalletApiKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<WalletApiKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(WalletApiKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(WalletApiKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface WalletApiKtor_utilsPipeline<TSubject, TContext> : WalletApiBase
- (instancetype)initWithPhase:(WalletApiKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<WalletApiKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(WalletApiKotlinArray<WalletApiKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(WalletApiKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(WalletApiKtor_utilsPipelinePhase *)reference phase:(WalletApiKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(WalletApiKtor_utilsPipelinePhase *)reference phase:(WalletApiKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(WalletApiKtor_utilsPipelinePhase *)phase block:(id<WalletApiKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<WalletApiKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(WalletApiKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(WalletApiKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(WalletApiKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(WalletApiKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<WalletApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<WalletApiKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface WalletApiKtor_client_coreHttpReceivePipeline : WalletApiKtor_utilsPipeline<WalletApiKtor_client_coreHttpResponse *, WalletApiKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(WalletApiKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<WalletApiKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(WalletApiKotlinArray<WalletApiKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface WalletApiKtor_client_coreHttpRequestPipeline : WalletApiKtor_utilsPipeline<id, WalletApiKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(WalletApiKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<WalletApiKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(WalletApiKotlinArray<WalletApiKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface WalletApiKtor_client_coreHttpResponsePipeline : WalletApiKtor_utilsPipeline<WalletApiKtor_client_coreHttpResponseContainer *, WalletApiKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(WalletApiKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<WalletApiKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(WalletApiKotlinArray<WalletApiKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface WalletApiKtor_client_coreHttpSendPipeline : WalletApiKtor_utilsPipeline<id, WalletApiKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(WalletApiKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<WalletApiKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(WalletApiKotlinArray<WalletApiKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_ioCharset")))
@interface WalletApiKtor_ioCharset : WalletApiBase
- (instancetype)initWith_name:(NSString *)_name __attribute__((swift_name("init(_name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_ioCharsetCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (WalletApiKtor_ioCharsetDecoder *)doNewDecoder __attribute__((swift_name("doNewDecoder()")));
- (WalletApiKtor_ioCharsetEncoder *)doNewEncoder __attribute__((swift_name("doNewEncoder()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface WalletApiKtor_utilsTypeInfo : WalletApiBase
- (instancetype)initWithType:(id<WalletApiKotlinKClass>)type reifiedType:(id<WalletApiKotlinKType>)reifiedType kotlinType:(id<WalletApiKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<WalletApiKotlinKClass>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<WalletApiKotlinKType>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<WalletApiKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKtor_utilsTypeInfo *)doCopyType:(id<WalletApiKotlinKClass>)type reifiedType:(id<WalletApiKotlinKType>)reifiedType kotlinType:(id<WalletApiKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<WalletApiKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<WalletApiKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<WalletApiKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_websocketsFrame.Companion")))
@interface WalletApiKtor_websocketsFrameCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_websocketsFrameCompanion *shared __attribute__((swift_name("shared")));
- (WalletApiKtor_websocketsFrame *)byTypeFin:(BOOL)fin frameType:(WalletApiKtor_websocketsFrameType *)frameType data:(WalletApiKotlinByteArray *)data rsv1:(BOOL)rsv1 rsv2:(BOOL)rsv2 rsv3:(BOOL)rsv3 __attribute__((swift_name("byType(fin:frameType:data:rsv1:rsv2:rsv3:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface WalletApiKotlinByteArray : WalletApiBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(WalletApiByte *(^)(WalletApiInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (WalletApiKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol WalletApiKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol WalletApiKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface WalletApiKotlinEnum<E> : WalletApiBase <WalletApiKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_websocketsFrameType")))
@interface WalletApiKtor_websocketsFrameType : WalletApiKotlinEnum<WalletApiKtor_websocketsFrameType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKtor_websocketsFrameTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) WalletApiKtor_websocketsFrameType *text __attribute__((swift_name("text")));
@property (class, readonly) WalletApiKtor_websocketsFrameType *binary __attribute__((swift_name("binary")));
@property (class, readonly) WalletApiKtor_websocketsFrameType *close __attribute__((swift_name("close")));
@property (class, readonly) WalletApiKtor_websocketsFrameType *ping __attribute__((swift_name("ping")));
@property (class, readonly) WalletApiKtor_websocketsFrameType *pong __attribute__((swift_name("pong")));
+ (WalletApiKotlinArray<WalletApiKtor_websocketsFrameType *> *)values __attribute__((swift_name("values()")));
@property (readonly) BOOL controlFrame __attribute__((swift_name("controlFrame")));
@property (readonly) int32_t opcode __attribute__((swift_name("opcode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol WalletApiKotlinx_coroutines_coreChildHandle <WalletApiKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(WalletApiKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol WalletApiKotlinx_coroutines_coreChildJob <WalletApiKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<WalletApiKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol WalletApiKotlinSequence
@required
- (id<WalletApiKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol WalletApiKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<WalletApiKotlinx_coroutines_coreSelectInstance>)select block:(id<WalletApiKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol WalletApiKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface WalletApiKtor_client_coreHttpRequestData : WalletApiBase
- (instancetype)initWithUrl:(WalletApiKtor_httpUrl *)url method:(WalletApiKtor_httpHttpMethod *)method headers:(id<WalletApiKtor_httpHeaders>)headers body:(WalletApiKtor_httpOutgoingContent *)body executionContext:(id<WalletApiKotlinx_coroutines_coreJob>)executionContext attributes:(id<WalletApiKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<WalletApiKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<WalletApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) WalletApiKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<WalletApiKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) WalletApiKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) WalletApiKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface WalletApiKtor_client_coreHttpResponseData : WalletApiBase
- (instancetype)initWithStatusCode:(WalletApiKtor_httpHttpStatusCode *)statusCode requestTime:(WalletApiKtor_utilsGMTDate *)requestTime headers:(id<WalletApiKtor_httpHeaders>)headers version:(WalletApiKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<WalletApiKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<WalletApiKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<WalletApiKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) WalletApiKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) WalletApiKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) WalletApiKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface WalletApiKotlinAbstractCoroutineContextElement : WalletApiBase <WalletApiKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<WalletApiKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<WalletApiKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol WalletApiKotlinContinuationInterceptor <WalletApiKotlinCoroutineContextElement>
@required
- (id<WalletApiKotlinContinuation>)interceptContinuationContinuation:(id<WalletApiKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<WalletApiKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface WalletApiKotlinx_coroutines_coreCoroutineDispatcher : WalletApiKotlinAbstractCoroutineContextElement <WalletApiKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<WalletApiKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<WalletApiKotlinCoroutineContext>)context block:(id<WalletApiKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<WalletApiKotlinCoroutineContext>)context block:(id<WalletApiKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<WalletApiKotlinContinuation>)interceptContinuationContinuation:(id<WalletApiKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<WalletApiKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (WalletApiKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (WalletApiKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(WalletApiKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<WalletApiKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol WalletApiKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<WalletApiKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<WalletApiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<WalletApiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) WalletApiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface WalletApiKotlinx_serialization_coreSerializersModule : WalletApiBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<WalletApiKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<WalletApiKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<WalletApiKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<WalletApiKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<WalletApiKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<WalletApiKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<WalletApiKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<WalletApiKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol WalletApiKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface WalletApiKotlinx_serialization_coreSerialKind : WalletApiBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol WalletApiKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<WalletApiKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<WalletApiKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<WalletApiKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<WalletApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) WalletApiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface WalletApiKotlinNothing : WalletApiBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface WalletApiKtor_client_coreHttpClientCallCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) WalletApiKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol WalletApiKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(WalletApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(WalletApiLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(WalletApiKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(WalletApiLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(WalletApiKtor_ioChunkBuffer *)dst completionHandler:(void (^)(WalletApiInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(WalletApiKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(WalletApiInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(WalletApiKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(WalletApiInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(WalletApiInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(WalletApiBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(WalletApiByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(WalletApiDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(WalletApiFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(WalletApiKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(WalletApiKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(WalletApiInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(WalletApiLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(WalletApiKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(WalletApiKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<WalletApiKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(WalletApiShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<WalletApiKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<WalletApiKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(WalletApiBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) WalletApiKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol WalletApiKtor_httpHttpMessage
@required
@property (readonly) id<WalletApiKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol WalletApiKtor_client_coreHttpRequest <WalletApiKtor_httpHttpMessage, WalletApiKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<WalletApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) WalletApiKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) WalletApiKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) WalletApiKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) WalletApiKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface WalletApiKtor_client_coreHttpResponse : WalletApiBase <WalletApiKtor_httpHttpMessage, WalletApiKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WalletApiKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<WalletApiKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) WalletApiKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) WalletApiKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) WalletApiKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_websocketsWebSocketExtensionHeader")))
@interface WalletApiKtor_websocketsWebSocketExtensionHeader : WalletApiBase
- (instancetype)initWithName:(NSString *)name parameters:(NSArray<NSString *> *)parameters __attribute__((swift_name("init(name:parameters:)"))) __attribute__((objc_designated_initializer));
- (id<WalletApiKotlinSequence>)parseParameters __attribute__((swift_name("parseParameters()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<NSString *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((swift_name("Ktor_websocketsWebSocketExtensionFactory")))
@protocol WalletApiKtor_websocketsWebSocketExtensionFactory
@required
- (id<WalletApiKtor_websocketsWebSocketExtension>)installConfig:(void (^)(id))config __attribute__((swift_name("install(config:)")));
@property (readonly) WalletApiKtor_utilsAttributeKey<id<WalletApiKtor_websocketsWebSocketExtension>> *key __attribute__((swift_name("key")));
@property (readonly) BOOL rsv1 __attribute__((swift_name("rsv1")));
@property (readonly) BOOL rsv2 __attribute__((swift_name("rsv2")));
@property (readonly) BOOL rsv3 __attribute__((swift_name("rsv3")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChannelIterator")))
@protocol WalletApiKotlinx_coroutines_coreChannelIterator
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(WalletApiBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol WalletApiKotlinx_coroutines_coreSelectClause1
@required
- (void)registerSelectClause1Select:(id<WalletApiKotlinx_coroutines_coreSelectInstance>)select block:(id<WalletApiKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause1(select:block:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause2")))
@protocol WalletApiKotlinx_coroutines_coreSelectClause2
@required
- (void)registerSelectClause2Select:(id<WalletApiKotlinx_coroutines_coreSelectInstance>)select param:(id _Nullable)param block:(id<WalletApiKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause2(select:param:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface WalletApiKtor_client_coreProxyConfig : WalletApiBase
- (instancetype)initWithUrl:(WalletApiKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WalletApiKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol WalletApiKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(WalletApiKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) WalletApiKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface WalletApiKtor_utilsAttributeKey<T> : WalletApiBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface WalletApiKtor_eventsEventDefinition<T> : WalletApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface WalletApiKtor_utilsPipelinePhase : WalletApiBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol WalletApiKotlinSuspendFunction2 <WalletApiKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface WalletApiKtor_client_coreHttpReceivePipelinePhases : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface WalletApiKtor_client_coreHttpRequestPipelinePhases : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol WalletApiKtor_httpHttpMessageBuilder
@required
@property (readonly) WalletApiKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface WalletApiKtor_client_coreHttpRequestBuilder : WalletApiBase <WalletApiKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) WalletApiKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (WalletApiKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<WalletApiKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<WalletApiKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<WalletApiKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (WalletApiKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(WalletApiKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (WalletApiKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(WalletApiKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(WalletApiKtor_httpURLBuilder *, WalletApiKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<WalletApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property WalletApiKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<WalletApiKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) WalletApiKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property WalletApiKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) WalletApiKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface WalletApiKtor_client_coreHttpResponsePipelinePhases : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface WalletApiKtor_client_coreHttpResponseContainer : WalletApiBase
- (instancetype)initWithExpectedType:(WalletApiKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (WalletApiKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(WalletApiKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WalletApiKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface WalletApiKtor_client_coreHttpSendPipelinePhases : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) WalletApiKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioCharset.Companion")))
@interface WalletApiKtor_ioCharsetCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_ioCharsetCompanion *shared __attribute__((swift_name("shared")));
- (WalletApiKtor_ioCharset *)forNameName:(NSString *)name __attribute__((swift_name("forName(name:)")));
- (BOOL)isSupportedCharset:(NSString *)charset __attribute__((swift_name("isSupported(charset:)")));
@end

__attribute__((swift_name("Ktor_ioCharsetDecoder")))
@interface WalletApiKtor_ioCharsetDecoder : WalletApiBase
- (instancetype)initWith_charset:(WalletApiKtor_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_ioCharsetEncoder")))
@interface WalletApiKtor_ioCharsetEncoder : WalletApiBase
- (instancetype)initWith_charset:(WalletApiKtor_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol WalletApiKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol WalletApiKotlinKAnnotatedElement
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol WalletApiKotlinKClass <WalletApiKotlinKDeclarationContainer, WalletApiKotlinKAnnotatedElement, WalletApiKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol WalletApiKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<WalletApiKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<WalletApiKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface WalletApiKotlinByteIterator : WalletApiBase <WalletApiKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (WalletApiByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface WalletApiKotlinEnumCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_websocketsFrameType.Companion")))
@interface WalletApiKtor_websocketsFrameTypeCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_websocketsFrameTypeCompanion *shared __attribute__((swift_name("shared")));
- (WalletApiKtor_websocketsFrameType * _Nullable)getOpcode:(int32_t)opcode __attribute__((swift_name("get(opcode:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol WalletApiKotlinx_coroutines_coreParentJob <WalletApiKotlinx_coroutines_coreJob>
@required
- (WalletApiKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol WalletApiKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<WalletApiKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(WalletApiKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(WalletApiKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<WalletApiKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface WalletApiKtor_httpUrl : WalletApiBase
@property (class, readonly, getter=companion) WalletApiKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
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
@property (readonly) id<WalletApiKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) WalletApiKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface WalletApiKtor_httpHttpMethod : WalletApiBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol WalletApiKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<WalletApiKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol WalletApiKtor_httpHeaders <WalletApiKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface WalletApiKtor_httpOutgoingContent : WalletApiBase
- (id _Nullable)getPropertyKey:(WalletApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(WalletApiKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<WalletApiKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) WalletApiLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) WalletApiKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<WalletApiKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) WalletApiKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface WalletApiKtor_httpHttpStatusCode : WalletApiBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (WalletApiKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface WalletApiKtor_utilsGMTDate : WalletApiBase <WalletApiKotlinComparable>
@property (class, readonly, getter=companion) WalletApiKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(WalletApiKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKtor_utilsMonth *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(WalletApiKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(WalletApiKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) WalletApiKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) WalletApiKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface WalletApiKtor_httpHttpProtocolVersion : WalletApiBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol WalletApiKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<WalletApiKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface WalletApiKotlinAbstractCoroutineContextKey<B, E> : WalletApiBase <WalletApiKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<WalletApiKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<WalletApiKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface WalletApiKotlinx_coroutines_coreCoroutineDispatcherKey : WalletApiKotlinAbstractCoroutineContextKey<id<WalletApiKotlinContinuationInterceptor>, WalletApiKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<WalletApiKotlinCoroutineContextKey>)baseKey safeCast:(id<WalletApiKotlinCoroutineContextElement> _Nullable (^)(id<WalletApiKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol WalletApiKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol WalletApiKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<WalletApiKotlinKClass>)kClass provider:(id<WalletApiKotlinx_serialization_coreKSerializer> (^)(NSArray<id<WalletApiKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<WalletApiKotlinKClass>)kClass serializer:(id<WalletApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<WalletApiKotlinKClass>)baseClass actualClass:(id<WalletApiKotlinKClass>)actualClass actualSerializer:(id<WalletApiKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<WalletApiKotlinKClass>)baseClass defaultDeserializerProvider:(id<WalletApiKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<WalletApiKotlinKClass>)baseClass defaultDeserializerProvider:(id<WalletApiKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<WalletApiKotlinKClass>)baseClass defaultSerializerProvider:(id<WalletApiKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface WalletApiKtor_ioMemory : WalletApiBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(WalletApiKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(WalletApiKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (WalletApiKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (WalletApiKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface WalletApiKtor_ioBuffer : WalletApiBase
- (instancetype)initWithMemory:(WalletApiKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (WalletApiKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(WalletApiKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
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
@property (readonly) WalletApiKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface WalletApiKtor_ioChunkBuffer : WalletApiKtor_ioBuffer
- (instancetype)initWithMemory:(WalletApiKtor_ioMemory *)memory origin:(WalletApiKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<WalletApiKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(WalletApiKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (WalletApiKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (WalletApiKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<WalletApiKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) WalletApiKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) WalletApiKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface WalletApiKtor_ioInput : WalletApiBase <WalletApiKtor_ioCloseable>
- (instancetype)initWithHead:(WalletApiKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<WalletApiKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (WalletApiKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(WalletApiKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(WalletApiKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(WalletApiKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<WalletApiKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<WalletApiKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<WalletApiKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface WalletApiKtor_ioByteReadPacket : WalletApiKtor_ioInput
- (instancetype)initWithHead:(WalletApiKtor_ioChunkBuffer *)head pool:(id<WalletApiKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(WalletApiKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<WalletApiKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (WalletApiKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (WalletApiKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(WalletApiKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol WalletApiKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (WalletApiKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol WalletApiKotlinAppendable
@required
- (id<WalletApiKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<WalletApiKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<WalletApiKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol WalletApiKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<WalletApiKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<WalletApiKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<WalletApiKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<WalletApiKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface WalletApiKtor_utilsStringValuesBuilderImpl : WalletApiBase <WalletApiKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<WalletApiKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<WalletApiKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<WalletApiKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<WalletApiKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) WalletApiMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface WalletApiKtor_httpHeadersBuilder : WalletApiKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<WalletApiKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface WalletApiKtor_client_coreHttpRequestBuilderCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface WalletApiKtor_httpURLBuilder : WalletApiBase
- (instancetype)initWithProtocol:(WalletApiKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<WalletApiKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (WalletApiKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<WalletApiKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<WalletApiKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property WalletApiKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface WalletApiKotlinKTypeProjection : WalletApiBase
- (instancetype)initWithVariance:(WalletApiKotlinKVariance * _Nullable)variance type:(id<WalletApiKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (WalletApiKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<WalletApiKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKotlinKTypeProjection *)doCopyVariance:(WalletApiKotlinKVariance * _Nullable)variance type:(id<WalletApiKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<WalletApiKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) WalletApiKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface WalletApiKotlinx_coroutines_coreAtomicDesc : WalletApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(WalletApiKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(WalletApiKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property WalletApiKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface WalletApiKotlinx_coroutines_coreOpDescriptor : WalletApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(WalletApiKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WalletApiKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : WalletApiKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) WalletApiKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface WalletApiKtor_httpUrlCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol WalletApiKtor_httpParameters <WalletApiKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface WalletApiKtor_httpURLProtocol : WalletApiBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface WalletApiKtor_httpHttpMethodCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (WalletApiKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<WalletApiKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) WalletApiKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) WalletApiKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) WalletApiKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) WalletApiKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) WalletApiKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) WalletApiKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) WalletApiKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol WalletApiKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface WalletApiKtor_httpHeaderValueWithParameters : WalletApiBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<WalletApiKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) WalletApiKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<WalletApiKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface WalletApiKtor_httpContentType : WalletApiKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<WalletApiKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<WalletApiKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(WalletApiKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (WalletApiKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (WalletApiKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface WalletApiKtor_httpHttpStatusCodeCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (WalletApiKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) WalletApiKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<WalletApiKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface WalletApiKtor_utilsGMTDateCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) WalletApiKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface WalletApiKtor_utilsWeekDay : WalletApiKotlinEnum<WalletApiKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) WalletApiKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) WalletApiKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) WalletApiKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) WalletApiKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) WalletApiKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) WalletApiKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) WalletApiKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (WalletApiKotlinArray<WalletApiKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface WalletApiKtor_utilsMonth : WalletApiKotlinEnum<WalletApiKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) WalletApiKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) WalletApiKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) WalletApiKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) WalletApiKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) WalletApiKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) WalletApiKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) WalletApiKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) WalletApiKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) WalletApiKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) WalletApiKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) WalletApiKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) WalletApiKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) WalletApiKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (WalletApiKotlinArray<WalletApiKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface WalletApiKtor_httpHttpProtocolVersionCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (WalletApiKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (WalletApiKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) WalletApiKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) WalletApiKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) WalletApiKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) WalletApiKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) WalletApiKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface WalletApiKtor_ioMemoryCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) WalletApiKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface WalletApiKtor_ioBufferCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) WalletApiKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol WalletApiKtor_ioObjectPool <WalletApiKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface WalletApiKtor_ioChunkBufferCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) WalletApiKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<WalletApiKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<WalletApiKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface WalletApiKtor_ioInputCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface WalletApiKtor_ioByteReadPacketCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) WalletApiKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface WalletApiKtor_httpURLBuilderCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol WalletApiKtor_httpParametersBuilder <WalletApiKtor_utilsStringValuesBuilder>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface WalletApiKotlinKVariance : WalletApiKotlinEnum<WalletApiKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) WalletApiKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) WalletApiKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) WalletApiKotlinKVariance *out __attribute__((swift_name("out")));
+ (WalletApiKotlinArray<WalletApiKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface WalletApiKotlinKTypeProjectionCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (WalletApiKotlinKTypeProjection *)contravariantType:(id<WalletApiKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (WalletApiKotlinKTypeProjection *)covariantType:(id<WalletApiKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (WalletApiKotlinKTypeProjection *)invariantType:(id<WalletApiKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) WalletApiKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface WalletApiKotlinx_coroutines_coreAtomicOp<__contravariant T> : WalletApiKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) WalletApiKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode : WalletApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(WalletApiBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(WalletApiBoolean *(^)(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(WalletApiBoolean *(^)(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(WalletApiBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(WalletApiBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : WalletApiKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(WalletApiKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(WalletApiKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(WalletApiKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface WalletApiKtor_httpURLProtocolCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (WalletApiKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) WalletApiKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) WalletApiKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) WalletApiKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) WalletApiKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) WalletApiKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, WalletApiKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface WalletApiKtor_httpHeaderValueParam : WalletApiBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (WalletApiKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface WalletApiKtor_httpHeaderValueWithParametersCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<WalletApiKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface WalletApiKtor_httpContentTypeCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (WalletApiKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) WalletApiKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface WalletApiKtor_utilsWeekDayCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (WalletApiKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (WalletApiKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface WalletApiKtor_utilsMonthCompanion : WalletApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) WalletApiKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (WalletApiKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (WalletApiKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(WalletApiKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(WalletApiKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) WalletApiKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
