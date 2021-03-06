//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXContextualMemoriesSetting-Protocol.h>

@class NSArray, NSString;

@interface PXContextualMemoriesPeopleSetting : NSObject <PXContextualMemoriesSetting>
{
    NSArray *_peopleNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *headerTitle;
@property (strong, nonatomic) NSArray *peopleNames; // @synthesize peopleNames=_peopleNames;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)init;
- (void)requestPeopleNamesUpdateSinceDate:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resetToDefault;

@end

