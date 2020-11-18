//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarComposedData : NSObject <NSCopying>
{
    CDStruct_19f80fdc _rawData;
    BOOL _itemEnabled[41];
    NSString *_doubleHeightStatus;
    UISystemNavigationAction *_systemNavigationItem;
}

@property (copy, nonatomic) NSString *doubleHeightStatus; // @synthesize doubleHeightStatus=_doubleHeightStatus;
@property (readonly, nonatomic) CDStruct_19f80fdc *rawData;
@property (strong, nonatomic) UISystemNavigationAction *systemNavigationItem; // @synthesize systemNavigationItem=_systemNavigationItem;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithRawData:(const CDStruct_19f80fdc *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isItemEnabled:(int)arg1;
- (void)setItem:(int)arg1 enabled:(BOOL)arg2;

@end

