//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSAutomaticReadingListItem.h>

@class NSString;

@interface WBSAutomaticReadingListSinaWeiboItem : WBSAutomaticReadingListItem
{
    NSString *_originatorProfileImageURLString;
    NSString *_profileURLComponent;
}

@property (copy, nonatomic) NSString *originatorProfileImageURLString; // @synthesize originatorProfileImageURLString=_originatorProfileImageURLString;
@property (copy, nonatomic) NSString *profileURLComponent; // @synthesize profileURLComponent=_profileURLComponent;

- (void).cxx_destruct;
- (id)_profileImageURLWithImageSizeString:(id)arg1;
- (id)biggerOriginatorProfileImageURL;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;
- (id)originatorProfileImageURL;
- (id)originatorProfileURL;
- (id)socialSource;
- (id)sourceRecordURL;

@end
