//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/WebItemProviderRegistrar-Protocol.h>

@class NSData, NSString;
@protocol NSItemProviderWriting;

__attribute__((visibility("hidden")))
@interface WebItemProviderPromisedFileRegistrar : NSObject <WebItemProviderRegistrar>
{
    struct RetainPtr<NSString> _typeIdentifier;
    struct BlockPtr<void (void (^)(NSURL *, NSError *))> _callback;
}

@property (readonly, nonatomic) NSData *dataForClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<NSItemProviderWriting> representingObjectForClient;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSString *typeIdentifierForClient;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)registerItemProvider:(id)arg1;

@end

