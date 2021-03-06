//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

@interface IDSQRParticipantStreams : NSObject
{
    NSNumber *_participantID;
    NSMutableArray *_streamArray;
    BOOL _anyParticipant;
    BOOL _anyStream;
}

@property (readonly, nonatomic) BOOL anyParticipant; // @synthesize anyParticipant=_anyParticipant;
@property (readonly, nonatomic) BOOL anyStream; // @synthesize anyStream=_anyStream;
@property (readonly) NSNumber *participantID; // @synthesize participantID=_participantID;
@property (readonly) NSMutableArray *streamArray; // @synthesize streamArray=_streamArray;

+ (id)streamWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(BOOL)arg3 anyStream:(BOOL)arg4;
- (void).cxx_destruct;
- (id)description;
- (id)initWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(BOOL)arg3 anyStream:(BOOL)arg4;

@end

