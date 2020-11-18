//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKVersionedDocument.h>

@class PKDrawing;

@interface PKDrawingVersionedDocument : PKVersionedDocument
{
    PKDrawing *_drawing;
}

@property (strong, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
- (void).cxx_destruct;
- (id)initWithDrawing:(id)arg1;
- (void)loadUnzippedData:(id)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)serializeCurrentVersion:(unsigned int *)arg1;

@end

