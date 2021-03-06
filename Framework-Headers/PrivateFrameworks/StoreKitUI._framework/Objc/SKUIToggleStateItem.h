//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString;

@interface SKUIToggleStateItem : NSObject <NSCopying>
{
    BOOL _toggled;
    long long _count;
    NSString *_itemIdentifier;
    NSString *_nonToggledString;
    NSString *_toggledString;
}

@property (nonatomic) long long count; // @synthesize count=_count;
@property (copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (copy, nonatomic) NSString *nonToggleString; // @synthesize nonToggleString=_nonToggledString;
@property (nonatomic) BOOL toggled; // @synthesize toggled=_toggled;
@property (copy, nonatomic) NSString *toggledString; // @synthesize toggledString=_toggledString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

