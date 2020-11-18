//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSString, PLPhotoLibrary;

@interface PLKeyFaceOperation : NSOperation
{
    NSString *_personUUID;
    PLPhotoLibrary *_photoLibrary;
}

- (void)dealloc;
- (id)fetchFacesForPerson:(id)arg1;
- (id)filterPredicateForPerson:(id)arg1;
- (id)initWithPersonUUID:(id)arg1;
- (id)initWithPersonUUID:(id)arg1 photoLibrary:(id)arg2;
- (void)main;
- (void)pickKeyFace;

@end
