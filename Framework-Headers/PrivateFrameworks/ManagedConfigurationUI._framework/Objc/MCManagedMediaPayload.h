//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class MCBook;

@interface MCManagedMediaPayload : MCPayload
{
    MCBook *_managedBook;
}

@property (strong, nonatomic) MCBook *managedBook; // @synthesize managedBook=_managedBook;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (id)initWithManagedMedia:(id)arg1 profile:(id)arg2;
- (id)title;

@end
