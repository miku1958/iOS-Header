//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption;

@interface HUSiriLanguageOptionItem : HFItem
{
    unsigned long long _optionStyle;
    HFAccessorySettingSiriLanguageAdapter *_adapter;
    HFSiriLanguageOption *_languageOption;
}

@property (readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter; // @synthesize adapter=_adapter;
@property (strong, nonatomic) HFSiriLanguageOption *languageOption; // @synthesize languageOption=_languageOption;
@property (readonly, nonatomic) unsigned long long optionStyle; // @synthesize optionStyle=_optionStyle;

+ (id)selectionKeyForLanguageOption:(id)arg1 withOptionStyle:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1 adapter:(id)arg2 languageOption:(id)arg3;

@end

