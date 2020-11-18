//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSDictionary, NSString;
@protocol PKPlugIn;

@interface NSExtension : NSObject
{
}

@property (readonly, strong, nonatomic) NSBundle *_extensionBundle; // @dynamic _extensionBundle;
@property (readonly, copy, nonatomic) NSString *_localizedName; // @dynamic _localizedName;
@property (readonly, copy, nonatomic) NSString *_localizedShortName; // @dynamic _localizedShortName;
@property (strong, nonatomic, setter=_setPlugIn:) id<PKPlugIn> _plugIn; // @dynamic _plugIn;
@property (copy, nonatomic) CDUnknownBlockType _requestPostCompletionBlock; // @dynamic _requestPostCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType _requestPostCompletionBlockWithItems; // @dynamic _requestPostCompletionBlockWithItems;
@property (readonly) BOOL _wantsProcessPerRequest; // @dynamic _wantsProcessPerRequest;
@property (readonly, copy, nonatomic) NSDictionary *attributes; // @dynamic attributes;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier; // @dynamic extensionPointIdentifier;
@property (readonly, copy, nonatomic) NSArray *icons; // @dynamic icons;
@property (readonly, copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property (readonly, copy, nonatomic) NSDictionary *infoDictionary; // @dynamic infoDictionary;
@property (readonly, nonatomic) BOOL optedIn; // @dynamic optedIn;
@property (copy, nonatomic) CDUnknownBlockType requestCancellationBlock; // @dynamic requestCancellationBlock;
@property (copy, nonatomic) CDUnknownBlockType requestCompletionBlock; // @dynamic requestCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType requestInterruptionBlock; // @dynamic requestInterruptionBlock;
@property (readonly, copy, nonatomic) NSString *version; // @dynamic version;

+ (BOOL)_evaluateActivationRuleWithoutWorkarounds:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (BOOL)_shouldLogExtensionDiscovery;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)endMatchingExtensions:(id)arg1;
+ (BOOL)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (id)extensionWithIdentifier:(id)arg1 error:(id *)arg2;
+ (id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(BOOL)arg2 error:(id *)arg3;
+ (void)extensionWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)extensionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)extensionsWithMatchingAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)extensionsWithMatchingAttributes:(id)arg1 error:(id *)arg2;
+ (id)globalStateQueueForExtension:(id)arg1;
+ (void)initializeFiltering;
+ (id)predicateForActivationRule:(id)arg1;
- (void)_dropAssertion;
- (id)_extensionContextForUUID:(id)arg1;
- (void)_hostDidBecomeActiveNote:(id)arg1;
- (void)_hostDidEnterBackgroundNote:(id)arg1;
- (void)_hostWillEnterForegroundNote:(id)arg1;
- (void)_hostWillResignActiveNote:(id)arg1;
- (id)_init;
- (id)_initWithPKPlugin:(id)arg1;
- (BOOL)_isPhotoServiceAccessGranted;
- (void)_kill:(int)arg1;
- (void)_safelyBeginUsing:(CDUnknownBlockType)arg1;
- (void)_safelyEndUsing:(CDUnknownBlockType)arg1;
- (void)_setAllowedErrorClasses:(id)arg1;
- (BOOL)attemptOptIn:(id *)arg1;
- (BOOL)attemptOptOut:(id *)arg1;
- (void)beginExtensionRequestWithInputItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)beginExtensionRequestWithInputItems:(id)arg1 error:(id *)arg2;
- (void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 error:(id *)arg3;
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cancelExtensionRequestWithIdentifier:(id)arg1;
- (id)init;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (int)pidForRequestIdentifier:(id)arg1;

@end
