//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCGalleryCollection.h>

@class NSArray;

@interface NTKCFacesArrayGalleryCollection : NTKCGalleryCollection
{
    NSArray *_faces;
}

@property (strong, nonatomic) NSArray *faces; // @synthesize faces=_faces;

- (void).cxx_destruct;
- (id)faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfFace:(id)arg1;
- (id)initWithTitle:(id)arg1 faces:(id)arg2;
- (unsigned long long)numberOfFaces;

@end

