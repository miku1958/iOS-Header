//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/TKTonePickerItem.h>

@interface TKToneClassicsPickerItem : TKTonePickerItem
{
    long long _classicToneIndex;
}

@property (nonatomic) long long classicToneIndex; // @synthesize classicToneIndex=_classicToneIndex;
@property (readonly, nonatomic) TKTonePickerItem *parentItem;

- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_setClassicToneIndex:(long long)arg1;
- (id)childItemAtIndex:(long long)arg1;

@end

