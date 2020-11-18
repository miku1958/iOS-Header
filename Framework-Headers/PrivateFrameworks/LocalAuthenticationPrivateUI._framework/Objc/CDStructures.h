//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CALayer, MISSING_TYPE, NSObject, NSString, UIImageView;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct UIColor {
    Class _field1;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct animation_completion_handler_container;

struct array<(anonymous namespace)::blur_container, 2> {
    struct blur_container __elems_[2];
};

struct blur_container {
    UIImageView *view;
    struct periodic_animation_state pulse;
};

struct map<CALayer *__unsafe_unretained, CALayer *, std::__1::less<CALayer *__unsafe_unretained>, std::__1::allocator<std::__1::pair<CALayer *const __unsafe_unretained, CALayer *>>> {
    struct __tree<std::__1::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__1::__map_value_compare<CALayer *__unsafe_unretained, std::__1::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__1::less<CALayer *__unsafe_unretained>, true>, std::__1::allocator<std::__1::__value_type<CALayer *__unsafe_unretained, CALayer *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CALayer *__unsafe_unretained, CALayer *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<CALayer *__unsafe_unretained, std::__1::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__1::less<CALayer *__unsafe_unretained>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct periodic_animation_state {
    BOOL enabled;
    NSString *_key;
    CALayer *_layer;
    NSObject *_removal_timer;
};

struct vector<CAShapeLayer *, std::__1::allocator<CAShapeLayer *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<CAShapeLayer *__strong *, std::__1::allocator<CAShapeLayer *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<LAUI_CA_utilities::animation_completion_handler_container, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container>> {
    struct animation_completion_handler_container *__begin_;
    struct animation_completion_handler_container *__end_;
    struct __compressed_pair<LAUI_CA_utilities::animation_completion_handler_container *, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container>> {
        struct animation_completion_handler_container *__value_;
    } __end_cap_;
};

struct vector<UIView *, std::__1::allocator<UIView *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<UIView *__strong *, std::__1::allocator<UIView *>> {
        id *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

