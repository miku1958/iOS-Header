//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNContactChangeRequest : NSObject
{
    NSArray *_contacts;
    long long _kind;
}

@property (readonly, copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property (readonly, nonatomic) long long kind; // @synthesize kind=_kind;

+ (id)contactChangeRequestWithKind:(long long)arg1 contacts:(id)arg2;
- (void)dealloc;
- (id)initWithKind:(long long)arg1 contacts:(id)arg2;

@end
