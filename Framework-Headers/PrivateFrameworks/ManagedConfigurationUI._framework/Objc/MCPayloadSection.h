//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MCPayloadSection : NSObject
{
    NSString *_sectionTitle;
    NSString *_sectionFooter;
    NSMutableArray *_payloadInfos;
}

@property (strong, nonatomic) NSMutableArray *payloadInfos; // @synthesize payloadInfos=_payloadInfos;
@property (strong, nonatomic) NSString *sectionFooter; // @synthesize sectionFooter=_sectionFooter;
@property (strong, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 payloadInfos:(id)arg3;

@end

