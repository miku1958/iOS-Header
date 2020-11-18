//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NTKEditOptionCollection : NSObject
{
    BOOL _isColor;
    BOOL _isPosition;
    BOOL _isShowSeconds;
    long long _mode;
    NSString *_localizedName;
    NSArray *_options;
}

@property (nonatomic) BOOL isColor; // @synthesize isColor=_isColor;
@property (nonatomic) BOOL isPosition; // @synthesize isPosition=_isPosition;
@property (nonatomic) BOOL isShowSeconds; // @synthesize isShowSeconds=_isShowSeconds;
@property (copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (copy, nonatomic) NSArray *options; // @synthesize options=_options;

+ (id)editOptionCollectionWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3;
- (void).cxx_destruct;
- (id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

