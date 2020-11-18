//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PBServerConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSXPCConnection *_memberQ_serverConnection;
}

@property (strong, nonatomic) NSXPCConnection *memberQ_serverConnection; // @synthesize memberQ_serverConnection=_memberQ_serverConnection;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property (readonly, nonatomic) NSXPCConnection *serverConnection; // @dynamic serverConnection;

+ (unsigned long long)beginListeningToPasteboardChangeNotifications;
+ (id)defaultConnection;
- (void).cxx_destruct;
- (void)deletePersistentPasteboardWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didPastePasteboard:(id)arg1;
- (void)getAllPasteboardsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)helloCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)localGeneralPasteboardCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pasteboardWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pasteboardWithName:(id)arg1 createIfNeeded:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)performJanitorialTasksCompletionBlock:(CDUnknownBlockType)arg1;
- (void)requestItemFromPasteboardWithName:(id)arg1 UUID:(id)arg2 itemIndex:(unsigned long long)arg3 typeIdentifier:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
