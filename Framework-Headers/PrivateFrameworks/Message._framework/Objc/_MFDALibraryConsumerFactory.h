//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFMessageDataConsumerFactory-Protocol.h>

@class MFMessage, MFMessageLibrary, NSString;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory>
{
    MFMessageLibrary *_library;
    MFMessage *_message;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MFMessageLibrary *library; // @synthesize library=_library;
@property (strong, nonatomic) MFMessage *message; // @synthesize message=_message;
@property (readonly) Class superclass;

- (id)dataConsumerForPart:(id)arg1;
- (void)dealloc;

@end
