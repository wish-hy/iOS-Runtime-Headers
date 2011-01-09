/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;



@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView>
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _deferredFrame;
    float _deferredMaxTotalWidth;
    float _deferredMinSegmentWidth;
    NSMutableArray *_deferredSegments;
    NSInteger _deferredSegmentedControlStyle;
    NSUInteger _deferredSelectedSegmentIndex;
    BOOL _deferredSizeToFit;
    BOOL _isDeferringInterfaceUpdates;
}

@property(getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;

+ (void)_initializeSafeCategory;

- (void)_insertSegmentWithValue:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_saveSegmentsAsDeferred;
- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (BOOL)isDeferringInterfaceUpdates;
- (void)setDeferringInterfaceUpdates:(BOOL)arg1;
- (void)sizeToFitWithMinimumSegmentWidth:(float)arg1 maximumTotalWidth:(float)arg2;
- (NSInteger)segmentedControlStyle;
- (void)setSelectedSegmentIndex:(NSInteger)arg1;
- (NSInteger)selectedSegmentIndex;
- (void)setSegmentedControlStyle:(NSInteger)arg1;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)removeSegmentAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)removeAllSegments;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(NSUInteger)arg2;
- (id)titleForSegmentAtIndex:(NSUInteger)arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(NSUInteger)arg2;
- (id)imageForSegmentAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfSegments;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)dealloc;

@end