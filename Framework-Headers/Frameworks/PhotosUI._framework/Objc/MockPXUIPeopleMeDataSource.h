//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXUIPeopleMeDataSource.h>

@interface MockPXUIPeopleMeDataSource : PXUIPeopleMeDataSource
{
    BOOL _meContactShouldExist;
}

@property (nonatomic) BOOL meContactShouldExist; // @synthesize meContactShouldExist=_meContactShouldExist;

- (void)_requestMeContactWithCompletion:(CDUnknownBlockType)arg1;
- (id)_suggestedPersonForMe;

@end
