//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HLPHelpLocale : NSObject
{
    NSString *_path;
    NSArray *_isoCodes;
}

@property (copy, nonatomic) NSArray *isoCodes; // @synthesize isoCodes=_isoCodes;
@property (copy, nonatomic) NSString *path; // @synthesize path=_path;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;

@end
