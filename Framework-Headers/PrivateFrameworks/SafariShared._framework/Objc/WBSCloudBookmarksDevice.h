//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSCloudBookmarksDevice : NSObject
{
    NSString *_operatingSystemFamily;
    CDStruct_f6aba300 _operatingSystemVersion;
}

@property (readonly, nonatomic) NSString *operatingSystemFamily; // @synthesize operatingSystemFamily=_operatingSystemFamily;
@property (readonly, nonatomic) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithOperatingSystemVersion:(CDStruct_f6aba300)arg1 family:(id)arg2;

@end

