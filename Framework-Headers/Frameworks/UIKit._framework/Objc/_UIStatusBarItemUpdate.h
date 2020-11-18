//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class _UIStatusBarData, _UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface _UIStatusBarItemUpdate : NSObject <NSCopying>
{
    BOOL _enabilityChanged;
    BOOL _enabled;
    BOOL _dataChanged;
    BOOL _styleAttributesChanged;
    _UIStatusBarData *_data;
    _UIStatusBarStyleAttributes *_styleAttributes;
}

@property (strong, nonatomic) _UIStatusBarData *data; // @synthesize data=_data;
@property (nonatomic) BOOL dataChanged; // @synthesize dataChanged=_dataChanged;
@property (nonatomic) BOOL enabilityChanged; // @synthesize enabilityChanged=_enabilityChanged;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) _UIStatusBarStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property (nonatomic) BOOL styleAttributesChanged; // @synthesize styleAttributesChanged=_styleAttributesChanged;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
