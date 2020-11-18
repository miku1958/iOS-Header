//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXInspectorServices/AXUIClientDelegate-Protocol.h>

@class AXUIClient, NSString;

@interface AXInspectorServices : NSObject <AXUIClientDelegate>
{
    AXUIClient *_client;
}

@property (strong, nonatomic) AXUIClient *client; // @synthesize client=_client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_clientIdentifier;
- (void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_sendMessageWithIdentifier:(unsigned long long)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (void)hideInspector;
- (BOOL)isEventForInspector:(id)arg1;
- (BOOL)isInspectorMinimized;
- (void)showInspector;
- (void)updateAXFocusedElement:(id)arg1 headerElements:(id)arg2 nonfocusableElements:(id)arg3 updateVisualsOnly:(BOOL)arg4;
- (void)updateAXNotifications:(id)arg1;

@end
