//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MorphunAssetsUpdater/Message-Protocol.h>

@protocol OS_xpc_object;

@interface ForceUpdateMessage : NSObject <Message>
{
    NSObject<OS_xpc_object> *message;
}

@property (readonly) NSObject<OS_xpc_object> *message; // @synthesize message;

- (void).cxx_destruct;
- (id)init:(id)arg1 removeLanguages:(id)arg2;
- (int)type;

@end
