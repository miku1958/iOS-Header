//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSString, PKPassView;

@interface PKStringActivityItemProvider : UIActivityItemProvider
{
    NSString *_passSharingString;
    PKPassView *_passView;
    NSString *_passOrganizationName;
}

- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2;
- (void)dealloc;
- (id)initWithPass:(id)arg1 andPassView:(id)arg2;
- (id)item;

@end

