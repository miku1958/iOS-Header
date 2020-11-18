//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

@class NSDate, NSMutableOrderedSet, NSOrderedSet, NSUUID, TTVectorMultiTimestamp;

@interface ICDrawing : NSObject <NSCopying>
{
    NSMutableOrderedSet *_commands;
    NSMutableOrderedSet *_visibleCommands;
    long long _orientation;
    struct CGRect _unrotatedBoundsInCommandSpace;
    struct CGRect _commandBounds;
    NSUUID *_replicaUUID;
    TTVectorMultiTimestamp *_timestamp;
    NSDate *_orientationTimestamp;
    struct CGSize _unrotatedSize;
}

@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, nonatomic) BOOL canChangeTransientOrientation;
@property (readonly, nonatomic) NSOrderedSet *commands; // @synthesize commands=_commands;
@property (readonly, nonatomic) struct CGRect fullBounds;
@property (readonly, nonatomic) long long imageOrientation;
@property (nonatomic) long long orientation;
@property (strong, nonatomic) NSDate *orientationTimestamp; // @synthesize orientationTimestamp=_orientationTimestamp;
@property (readonly, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
@property (strong, nonatomic) TTVectorMultiTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) struct CGRect unrotatedBoundsInCommandSpace; // @synthesize unrotatedBoundsInCommandSpace=_unrotatedBoundsInCommandSpace;
@property (nonatomic) struct CGSize unrotatedSize; // @synthesize unrotatedSize=_unrotatedSize;
@property (readonly, nonatomic) NSOrderedSet *visibleCommands;

+ (struct CGSize)defaultPixelSize;
+ (struct CGSize)defaultSize;
+ (struct CGAffineTransform)defaultSizeOrientationTransform:(long long)arg1;
+ (struct CGSize)fullSize:(struct CGSize)arg1 forOrientation:(long long)arg2;
+ (struct CGAffineTransform)orientationTransform:(long long)arg1 size:(struct CGSize)arg2;
+ (void)sortCommands:(id)arg1;
- (void).cxx_destruct;
- (void)addNewCommand:(id)arg1;
- (struct CGRect)calculateCommandBounds;
- (struct CGRect)commandBounds;
- (struct ICDrawingCommandID)commandIDForNewCommand;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)fullSize;
- (id)init;
- (id)initWithArchive:(const struct Drawing *)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithCommands:(id)arg1 fromDrawing:(id)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithData:(id)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithDrawing:(id)arg1;
- (id)initWithReplicaID:(id)arg1;
- (id)insertNewTestCommand;
- (void)invalidateBounds;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (id)mutableCommands;
- (struct CGAffineTransform)orientationTransform;
- (unsigned int)saveToArchive:(struct Drawing *)arg1 withPathData:(BOOL)arg2;
- (id)serializeWithPathData:(BOOL)arg1;
- (id)serializeWithPathData:(BOOL)arg1 toVersion:(unsigned int *)arg2;
- (id)setCommand:(id)arg1 hidden:(BOOL)arg2;
- (void)setCommandIDForInsertion:(id)arg1;
- (BOOL)setTransientOrientation:(long long)arg1;
- (void)sortCommands;
- (void)takeOrientationFrom:(id)arg1;
- (id)visibleCommandForInsertingCommand:(id)arg1;

@end

