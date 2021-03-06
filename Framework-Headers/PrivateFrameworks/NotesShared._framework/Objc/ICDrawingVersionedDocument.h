//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/TTVersionedDocument.h>

@class ICDrawing;

@interface ICDrawingVersionedDocument : TTVersionedDocument
{
    ICDrawing *_drawing;
}

@property (strong, nonatomic) ICDrawing *drawing; // @synthesize drawing=_drawing;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)serializeCurrentVersion:(unsigned int *)arg1;

@end

