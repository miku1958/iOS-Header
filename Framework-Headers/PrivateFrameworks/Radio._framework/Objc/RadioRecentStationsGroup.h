//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface RadioRecentStationsGroup : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _active;
    NSString *_localizedTitle;
    NSArray *_stations;
}

@property (readonly, nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property (readonly, copy, nonatomic) NSArray *stations; // @synthesize stations=_stations;

- (void).cxx_destruct;
- (id)_copyWithRecentStationsGroupClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
