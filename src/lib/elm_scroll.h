/**
 * @defgroup Scrollhints Scrollhints
 *
 * Objects when inside a scroller can scroll, but this may not always be
 * desirable in certain situations. This allows an object to hint to itself
 * and parents to "not scroll" in one of 2 ways. If any child object of a
 * scroller has pushed a scroll freeze or hold then it affects all parent
 * scrollers until all children have released them.
 *
 * 1. To hold on scrolling. This means just flicking and dragging may no
 * longer scroll, but pressing/dragging near an edge of the scroller will
 * still scroll. This is automatically used by the entry object when
 * selecting text.
 *
 * 2. To totally freeze scrolling. This means it stops. until
 * popped/released.
 *
 * @{
 */

/**
 * Push the scroll hold by 1
 *
 * This increments the scroll hold count by one. If it is more than 0 it will
 * take effect on the parents of the indicated object.
 *
 * @param obj The object
 * @ingroup Scrollhints
 */
EAPI void      elm_object_scroll_hold_push(Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * Pop the scroll hold by 1
 *
 * This decrements the scroll hold count by one. If it is more than 0 it will
 * take effect on the parents of the indicated object.
 *
 * @param obj The object
 * @ingroup Scrollhints
 */
EAPI void      elm_object_scroll_hold_pop(Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * Push the scroll freeze by 1
 *
 * This increments the scroll freeze count by one. If it is more
 * than 0 it will take effect on the parents of the indicated
 * object.
 *
 * @param obj The object
 * @ingroup Scrollhints
 */
EAPI void      elm_object_scroll_freeze_push(Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * Pop the scroll freeze by 1
 *
 * This decrements the scroll freeze count by one. If it is more
 * than 0 it will take effect on the parents of the indicated
 * object.
 *
 * @param obj The object
 * @ingroup Scrollhints
 */
EAPI void      elm_object_scroll_freeze_pop(Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * Lock the scrolling of the given widget (and thus all parents)
 *
 * This locks the given object from scrolling in the X axis (and implicitly
 * also locks all parent scrollers too from doing the same).
 *
 * @param obj The object
 * @param lock The lock state (1 == locked, 0 == unlocked)
 * @ingroup Scrollhints
 */
EAPI void      elm_object_scroll_lock_x_set(Evas_Object *obj, Eina_Bool lock) EINA_ARG_NONNULL(1);

/**
 * Lock the scrolling of the given widget (and thus all parents)
 *
 * This locks the given object from scrolling in the Y axis (and implicitly
 * also locks all parent scrollers too from doing the same).
 *
 * @param obj The object
 * @param lock The lock state (1 == locked, 0 == unlocked)
 * @ingroup Scrollhints
 */
EAPI void      elm_object_scroll_lock_y_set(Evas_Object *obj, Eina_Bool lock) EINA_ARG_NONNULL(1);

/**
 * Get the scrolling lock of the given widget
 *
 * This gets the lock for X axis scrolling.
 *
 * @param obj The object
 * @ingroup Scrollhints
 */
EAPI Eina_Bool elm_object_scroll_lock_x_get(const Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * Get the scrolling lock of the given widget
 *
 * This gets the lock for X axis scrolling.
 *
 * @param obj The object
 * @ingroup Scrollhints
 */
EAPI Eina_Bool elm_object_scroll_lock_y_get(const Evas_Object *obj) EINA_ARG_NONNULL(1);

/**
 * @}
 */
