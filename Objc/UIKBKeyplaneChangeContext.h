//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneChangeContext : NSObject
{
    BOOL _sizeDidChange;
    BOOL _splitWidthsChanged;
    BOOL _selfSizingChanged;
    BOOL _updateAssistantView;
    struct CGSize _size;
}

@property (nonatomic) BOOL selfSizingChanged; // @synthesize selfSizingChanged=_selfSizingChanged;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly, nonatomic) BOOL sizeDidChange; // @synthesize sizeDidChange=_sizeDidChange;
@property (nonatomic) BOOL splitWidthsChanged; // @synthesize splitWidthsChanged=_splitWidthsChanged;
@property (nonatomic) BOOL updateAssistantView; // @synthesize updateAssistantView=_updateAssistantView;

+ (id)keyplaneChangeContext;
+ (id)keyplaneChangeContextWithSize:(struct CGSize)arg1;

@end

