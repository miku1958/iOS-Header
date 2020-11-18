//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSItemProviderReading-Protocol.h>
#import <Intents/NSItemProviderWriting-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INIntent, NSArray, NSData, NSString, NSUserActivity;

@interface INShortcut : NSObject <INKeyImageProducing, NSItemProviderReading, NSItemProviderWriting, INImageProxyInjecting, NSSecureCoding, NSCopying>
{
    NSData *_activityData;
    INIntent *_intent;
    NSUserActivity *_userActivity;
    INImage *_activityImage;
    NSString *_activitySubtitle;
    NSString *_activityBundleIdentifier;
}

@property (readonly, nonatomic) NSString *_associatedAppBundleIdentifier;
@property (readonly) INImage *_keyImage;
@property (readonly, nonatomic) NSString *_subtitle;
@property (readonly, nonatomic) NSString *_title;
@property (readonly, copy, nonatomic) NSString *activityBundleIdentifier; // @synthesize activityBundleIdentifier=_activityBundleIdentifier;
@property (readonly, copy, nonatomic) NSData *activityData; // @synthesize activityData=_activityData;
@property (readonly, copy, nonatomic) INImage *activityImage; // @synthesize activityImage=_activityImage;
@property (readonly, copy, nonatomic) NSString *activitySubtitle; // @synthesize activitySubtitle=_activitySubtitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (BOOL)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;
- (void).cxx_destruct;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_initWithIntent:(id)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActivityData:(id)arg1 activityImage:(id)arg2 activitySubtitle:(id)arg3 activityBundleIdentifier:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithUserActivity:(id)arg1 bundleIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)shortcutWithActivityBundleIdentifier:(id)arg1;
- (id)shortcutWithActivityImage:(id)arg1;

@end
