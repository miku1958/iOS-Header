//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDetailSettingsDataSource-Protocol.h>

@class NSArray, NSString;

@interface PXPeopleDetailSettingsPersonSuggestionDataSource : NSObject <PXPeopleDetailSettingsDataSource>
{
    NSString *_title;
    NSArray *_personSuggestions;
}

@property (readonly, nonatomic) long long action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMoreDetails;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (strong, nonatomic) NSArray *personSuggestions; // @synthesize personSuggestions=_personSuggestions;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (unsigned long long)faceCount:(long long)arg1;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 personSuggestions:(id)arg2;
- (id)modelObjectForIndex:(long long)arg1;
- (id)personNameAtIndex:(long long)arg1;
- (long long)verifyTypeAtIndex:(long long)arg1;

@end

