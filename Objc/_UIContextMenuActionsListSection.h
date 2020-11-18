//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionsListSection : NSObject
{
    NSUUID *_identifier;
    BOOL _isCompact;
    BOOL _prefersSingleLineActions;
}

@property (readonly, nonatomic) BOOL isCompact; // @synthesize isCompact=_isCompact;
@property (readonly, nonatomic) BOOL prefersSingleLineActions; // @synthesize prefersSingleLineActions=_prefersSingleLineActions;

+ (id)sectionWithMenu:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

