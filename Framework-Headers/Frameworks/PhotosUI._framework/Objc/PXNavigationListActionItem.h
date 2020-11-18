//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNavigationListItem.h>

@class NSString;

@interface PXNavigationListActionItem : PXNavigationListItem
{
    NSString *_glyphImageName;
    NSString *_actionIdentifier;
    long long _style;
}

@property (readonly, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)glyphImageName;
- (unsigned long long)hash;
- (id)initWithActionType:(id)arg1;
- (BOOL)isEqualToNavigationListItem:(id)arg1;
- (id)representedObject;
- (long long)style;
- (id)titleForActionIdentifier:(id)arg1;

@end
