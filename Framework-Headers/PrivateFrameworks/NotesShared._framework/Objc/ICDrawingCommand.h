//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingCommandData;

@interface ICDrawingCommand : NSObject
{
    BOOL _hidden;
    ICDrawingCommandData *_data;
    struct TopoID _timestamp;
}

@property (readonly, nonatomic) ICDrawingCommandData *data; // @synthesize data=_data;
@property (readonly, nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property (readonly, nonatomic) struct TopoID timestamp; // @synthesize timestamp=_timestamp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct Command *)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;
- (id)initWithCommand:(id)arg1 hidden:(BOOL)arg2 timestamp:(struct TopoID)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualDrawingVisibleCommand:(id)arg1;
- (unsigned int)saveToArchive:(struct Command *)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3;

@end

