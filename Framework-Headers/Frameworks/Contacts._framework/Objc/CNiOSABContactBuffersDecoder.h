//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactBufferDecoder, CNContactFetchRequest, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CNiOSABContactBuffersDecoder : NSObject
{
    CNContactBufferDecoder *_decoder;
    NSMutableArray *_contactsWaitingForUnification;
    CNContactFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSMutableArray *contactsWaitingForUnification; // @synthesize contactsWaitingForUnification=_contactsWaitingForUnification;
@property (readonly, nonatomic) CNContactBufferDecoder *decoder; // @synthesize decoder=_decoder;
@property (readonly, nonatomic) CNContactFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;

- (void).cxx_destruct;
- (id)contactsFromData:(id)arg1 moreComing:(BOOL)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithFetchRequest:(id)arg1;
- (id)unifyContacts:(id)arg1 moreComing:(BOOL)arg2;

@end

