//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteTextInput/RTIDataPayload.h>

#import <RemoteTextInput/NSSecureCoding-Protocol.h>

@class NSUUID, RTIDocumentState, RTIDocumentTraits, RTITextOperations;

@interface RTIInputSystemDataPayload : RTIDataPayload <NSSecureCoding>
{
    BOOL _disableUpdate;
    RTIDocumentTraits *_documentTraits;
    RTIDocumentState *_documentState;
    RTITextOperations *_textOperations;
    NSUUID *_sessionUUID;
}

@property (strong, nonatomic) RTIDocumentState *documentState; // @synthesize documentState=_documentState;
@property (strong, nonatomic) RTIDocumentTraits *documentTraits; // @synthesize documentTraits=_documentTraits;
@property (strong, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property (strong, nonatomic) RTITextOperations *textOperations; // @synthesize textOperations=_textOperations;

+ (id)payloadWithData:(id)arg1;
+ (id)payloadWithData:(id)arg1 version:(unsigned long long)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_unarchiveData;
- (id)data;
- (id)initWithCoder:(id)arg1;
- (void)updateData;

@end
