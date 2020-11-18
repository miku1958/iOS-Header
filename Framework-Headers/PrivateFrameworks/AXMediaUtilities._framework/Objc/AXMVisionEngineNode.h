//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMDescribing-Protocol.h>
#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSString;
@protocol AXMVisionEngineNodeConnectionDelegate, OS_dispatch_queue;

@interface AXMVisionEngineNode : NSObject <NSSecureCoding, AXMDescribing>
{
    BOOL _connected;
    BOOL _enabled;
    id<AXMVisionEngineNodeConnectionDelegate> _delegate;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_nodeQueue;
}

@property (nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AXMVisionEngineNodeConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue; // @synthesize nodeQueue=_nodeQueue;
@property (readonly, nonatomic) BOOL requiresVisionFramework;
@property (readonly) Class superclass;

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
- (void).cxx_destruct;
- (void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2;
- (id)axmDescription;
- (void)connect:(id)arg1;
- (void)disconnect;
- (void)encodeWithCoder:(id)arg1;
- (void)freeResources;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end

