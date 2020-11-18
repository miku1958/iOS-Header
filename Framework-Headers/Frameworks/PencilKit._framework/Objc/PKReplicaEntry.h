//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCoding-Protocol.h>

@class PKDrawing;

@interface PKReplicaEntry : NSObject <NSCoding>
{
    unsigned int _replicaUUIDIndex;
    unsigned int _clock;
    unsigned int _subclock;
    BOOL _inUse;
    PKDrawing *_drawing;
}

@property (nonatomic) unsigned int clock; // @synthesize clock=_clock;
@property (nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property (nonatomic) BOOL inUse; // @synthesize inUse=_inUse;
@property (nonatomic) unsigned int replicaUUIDIndex; // @synthesize replicaUUIDIndex=_replicaUUIDIndex;
@property (nonatomic) unsigned int subclock; // @synthesize subclock=_subclock;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReplicaUUIDIndex:(unsigned int)arg1 clock:(unsigned int)arg2 subclock:(unsigned int)arg3 inUse:(BOOL)arg4 forDrawing:(id)arg5;

@end
