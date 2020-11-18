//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, CNMonogrammer, _MKUserLocationView;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MKUserLocationViewImageProvider : NSObject
{
    _MKUserLocationView *_view;
    NSObject<OS_dispatch_queue> *_queue;
    CNContactStore *_contactStore;
    CNMonogrammer *_monogrammer;
}

- (void).cxx_destruct;
- (void)_contactsChanged:(id)arg1;
- (id)_monogrammer;
- (void)_updateContactImage;
- (void)_updateDefaultImage;
- (void)_updateImage;
- (id)init;
- (id)initWithUserLocationView:(id)arg1;

@end
