//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingUndoStack, NSDate, NSMutableOrderedSet, NSOrderedSet, NSUUID, TTVectorMultiTimestamp;

@interface ICDrawing : NSObject
{
    NSMutableOrderedSet *_commands;
    NSMutableOrderedSet *_visibleCommands;
    long long _orientation;
    struct CGRect _unrotatedBoundsInCommandSpace;
    struct CGRect _commandBounds;
    ICDrawingUndoStack *_undoStack;
    NSUUID *_replicaUUID;
    TTVectorMultiTimestamp *_timestamp;
    NSDate *_orientationTimestamp;
}

@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, nonatomic) NSOrderedSet *commands; // @synthesize commands=_commands;
@property (readonly, nonatomic) struct CGRect fullBounds;
@property (readonly, nonatomic) long long imageOrientation;
@property (nonatomic) long long orientation;
@property (strong, nonatomic) NSDate *orientationTimestamp; // @synthesize orientationTimestamp=_orientationTimestamp;
@property (readonly, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
@property (strong, nonatomic) TTVectorMultiTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, nonatomic) ICDrawingUndoStack *undoStack; // @synthesize undoStack=_undoStack;
@property (nonatomic) struct CGRect unrotatedBoundsInCommandSpace; // @synthesize unrotatedBoundsInCommandSpace=_unrotatedBoundsInCommandSpace;
@property (readonly, nonatomic) NSOrderedSet *visibleCommands;

+ (struct CGSize)fullSizeForOrientation:(long long)arg1;
+ (struct CGAffineTransform)fullSizeOrientationTransform:(long long)arg1;
+ (struct CGAffineTransform)orientationTransform:(long long)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)platformFullPixelSize;
+ (struct CGSize)platformFullSize;
- (void).cxx_destruct;
- (void)addCommands:(id)arg1;
- (void)addNewCommand:(id)arg1;
- (struct CGRect)calculateCommandBounds;
- (struct CGRect)commandBounds;
- (struct ICDrawingCommandID)commandIDForNewCommand;
- (struct CGSize)fullSize;
- (void)incrementTimestampOfCommand:(id)arg1;
- (id)init;
- (id)initWithArchive:(const struct Drawing *)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithCommands:(id)arg1;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithData:(id)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithReplicaID:(id)arg1;
- (void)invalidateBounds;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (id)mutableCommands;
- (struct CGAffineTransform)orientationTransform;
- (unsigned int)saveToArchive:(struct Drawing *)arg1 withPathData:(BOOL)arg2;
- (id)serializeWithPathData:(BOOL)arg1;
- (id)serializeWithPathData:(BOOL)arg1 toVersion:(unsigned int *)arg2;
- (void)setCommandIDForInsertion:(id)arg1;
- (void)setTransientOrientation:(long long)arg1;
- (void)sortCommands;
- (struct CGSize)unrotatedFullSize;

@end

