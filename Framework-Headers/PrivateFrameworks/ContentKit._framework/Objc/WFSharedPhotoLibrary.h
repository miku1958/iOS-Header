//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/PHPhotoLibraryAvailabilityObserver-Protocol.h>

@class NSString, PHPhotoLibrary;

@interface WFSharedPhotoLibrary : NSObject <PHPhotoLibraryAvailabilityObserver>
{
    PHPhotoLibrary *_systemPhotoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) PHPhotoLibrary *systemPhotoLibrary; // @synthesize systemPhotoLibrary=_systemPhotoLibrary;

+ (id)sharedLibrary;
- (void).cxx_destruct;
- (id)fetchOptionsWithError:(id *)arg1;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (id)systemPhotoLibraryWithError:(id *)arg1;

@end
