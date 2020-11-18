//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface PXContentFilterGroup : NSObject <NSCopying>
{
    NSString *_name;
    NSArray *_filterIdentifiers;
}

@property (readonly, copy, nonatomic) NSArray *filterIdentifiers; // @synthesize filterIdentifiers=_filterIdentifiers;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)groupWithName:(id)arg1 filterIdentifiers:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 filterIdentifiers:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
